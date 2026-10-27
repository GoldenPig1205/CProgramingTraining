#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year;
    if (scanf("%d", &year) != 1) return 0;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("leap year\n");
    else
        printf("common year\n");
    return 0;
}
