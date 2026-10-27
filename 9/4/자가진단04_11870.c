#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score;
    if (scanf("%d", &score) != 1) return 0;
    if (score >= 90) printf("Excellent\n");
    else if (score >= 80) printf("Good\n");
    else if (score >= 70) printf("Pass\n");
    else printf("Fail\n");
    return 0;
}
