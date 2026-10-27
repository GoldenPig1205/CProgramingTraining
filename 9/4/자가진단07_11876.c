#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char grade;
    if (scanf(" %c", &grade) != 1) return 0;
    switch (grade) {
        case 'A': printf("Excellent\n"); break;
        case 'B': printf("Good\n"); break;
        case 'C': printf("Usually\n"); break;
        default: printf("error\n"); break;
    }
    return 0;
}
