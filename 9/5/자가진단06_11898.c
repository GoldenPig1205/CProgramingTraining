#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number;
    while (1) {
        printf("1. Korea\n2. USA\n3. Japan\n4. China\n");
        printf("number? ");
        fflush(stdout);
        if (scanf("%d", &number) != 1) return 0;
        printf("\n");
        switch (number) {
            case 1: printf("Seoul\n"); break;
            case 2: printf("Washington\n"); break;
            case 3: printf("Tokyo\n"); break;
            case 4: printf("Beijing\n"); break;
            default: printf("none\n"); return 0;
        }
        printf("\n");
    }
    return 0;
}
