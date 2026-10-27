#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double base, height;
    char answer;
    do {
        if (scanf("%lf %lf", &base, &height) != 2) return 0;
        printf("Triangle area = %.1f\n", base * height / 2.0);
        printf("Continue? ");
        fflush(stdout);

        if (scanf(" %c", &answer) != 1) return 0;
    } while (answer == 'Y' || answer == 'y');
    return 0;
}
