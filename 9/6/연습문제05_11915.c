#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, count = 0;
    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &n) != 1) return 0;
        if (n % 2 == 0) count++;
    }
    printf("Even numbers = %d\n", count);
    return 0;
}
