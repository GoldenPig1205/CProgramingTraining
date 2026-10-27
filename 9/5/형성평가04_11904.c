#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, count = 0;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (n % 3 != 0 && n % 5 != 0) count++;
    }
    printf("%d\n", count);
    return 0;
}
