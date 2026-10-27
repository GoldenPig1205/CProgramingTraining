#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score;
    if (scanf("%d", &score) != 1) return 0;
    if (score >= 80) printf("Passed.\n");
    else printf("Failed.\n");
    return 0;
}
