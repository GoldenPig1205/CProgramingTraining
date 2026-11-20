#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
    char name[101];
    int height;
    double weight;
};

int main(void) {
    struct Person people[5], temp;
    int i, j;

    for (i = 0; i < 5; i++) {
        if (scanf("%100s %d %lf", people[i].name, &people[i].height, &people[i].weight) != 3) return 0;
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(people[i].name, people[j].name) > 0) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", people[i].name, people[i].height, people[i].weight);
    }
    return 0;
}
