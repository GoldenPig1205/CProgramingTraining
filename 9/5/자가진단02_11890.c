#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, i = 1, sum = 0;
    if (scanf("%d", &n) != 1) return 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
