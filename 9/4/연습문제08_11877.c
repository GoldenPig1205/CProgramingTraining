#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int score;
    if (scanf("%d", &score) != 1) return 0;
    switch (score / 10) {
        case 10: case 9: printf("A\n"); break;
        case 8: printf("B\n"); break;
        case 7: printf("C\n"); break;
        case 6: printf("D\n"); break;
        default: printf("F\n"); break;
    }
    return 0;
}
