#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    long long sum = 0;
    if (scanf("%d", &n) != 1) return 0;
    for (long long i = 5; i <= n; i += 5) sum += i;
    printf("%lld\n", sum);
    return 0;
}
