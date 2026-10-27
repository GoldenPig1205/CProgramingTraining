#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    long long result;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    if (a > b) {
        result = (long long)a - b;
    } else {
        result = (long long)b - a;
    }
    printf("%lld\n", result);
    return 0;
}
