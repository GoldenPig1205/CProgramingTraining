#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number;
    if (scanf("%d", &number) != 1) return 0;
    switch (number) {
        case 1: printf("dog\n"); break;
        case 2: printf("cat\n"); break;
        case 3: printf("chick\n"); break;
        default: printf("blank\n"); break;
    }
    return 0;
}
