#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    int step = 1;
    if (a > b) step = -1;
    for (int i = 1; i <= 9; i++) {
        for (int dan = a; ; dan += step) {
            printf("%d * %d = %2d", dan, i, dan * i);
            if (dan == b) break;
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}
