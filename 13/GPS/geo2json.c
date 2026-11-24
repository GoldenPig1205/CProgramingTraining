#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *skip_spaces(char *text)
{
    while (isspace((unsigned char)*text))
        text++;
    return text;
}

static int read_point(char *line, double *latitude, double *longitude,
                      long *speed, char **label)
{
    char *end;
    *latitude = strtod(line, &end);
    if (line == end || !isfinite(*latitude) || *latitude < -90 || *latitude > 90)
        return 0;

    end = skip_spaces(end);
    if (*end != ',')
        return 0;

    line = end + 1;
    *longitude = strtod(line, &end);
    if (line == end || !isfinite(*longitude) || *longitude < -180 || *longitude > 180)
        return 0;

    end = skip_spaces(end);
    if (*end != ',')
        return 0;

    line = skip_spaces(end + 1);
    if (strncmp(line, "Speed", 5) != 0)
        return 0;

    line = skip_spaces(line + 5);
    if (*line != '=')
        return 0;

    line++;
    errno = 0;
    *speed = strtol(line, &end, 10);
    if (line == end || errno == ERANGE || *speed < 0)
        return 0;

    end = skip_spaces(end);
    *label = NULL;
    if (*end == '\0')
        return 1;
    if (*end != ',')
        return 0;

    *label = skip_spaces(end + 1);
    end = *label + strlen(*label);
    while (end > *label && isspace((unsigned char)end[-1]))
        end--;
    *end = '\0';
    return **label != '\0';
}

static void write_label(FILE *json, const char *label)
{
    fputs(", \"label\": \"", json);
    for (const unsigned char *ch = (const unsigned char *)label; *ch != '\0'; ch++) {
        if (*ch < 32)
            fprintf(json, "\\u%04x", (unsigned int)*ch);
        else {
            if (*ch == '"' || *ch == '\\')
                fputc('\\', json);
            fputc(*ch, json);
        }
    }
    fputc('"', json);
}

int main(void)
{
    FILE *csv = fopen("gps.csv", "r");
    if (csv == NULL) {
        perror("gps.csv");
        return 1;
    }

    FILE *json = fopen("output.json", "w");
    if (json == NULL) {
        perror("output.json");
        fclose(csv);
        return 1;
    }

    char line[256];
    size_t line_number = 0;
    size_t count = 0;

    fputs("[", json);
    while (fgets(line, sizeof line, csv) != NULL) {
        double latitude, longitude;
        long speed;
        char *label;
        line_number++;

        if (strlen(line) == sizeof line - 1 && strchr(line, '\n') == NULL) {
            int ch;
            while ((ch = fgetc(csv)) != '\n' && ch != EOF)
                ;
            fprintf(stderr, "Skipping line %zu: too long.\n", line_number);
            continue;
        }

        if (*skip_spaces(line) == '\0')
            continue;

        if (!read_point(line, &latitude, &longitude, &speed, &label)) {
            fprintf(stderr, "Skipping line %zu: invalid GPS data.\n", line_number);
            continue;
        }

        if (count > 0)
            fputs(",", json);
        fprintf(json, "\n  {\"latitude\": %.6f, \"longitude\": %.6f, "
                      "\"speed\": %ld, \"info\": \"Speed = %ld\"",
                latitude, longitude, speed, speed);
        if (label != NULL)
            write_label(json, label);
        fputc('}', json);
        count++;
    }

    fputs("\n]\n", json);
    int read_failed = ferror(csv);
    int write_failed = ferror(json);
    fclose(csv);
    if (fclose(json) == EOF)
        write_failed = 1;

    if (read_failed)
        fputs("Could not read gps.csv completely.\n", stderr);
    if (write_failed)
        fputs("Could not write output.json completely.\n", stderr);
    if (read_failed || write_failed)
        return 1;

    printf("output.json: %zu points\n", count);
    return 0;
}
