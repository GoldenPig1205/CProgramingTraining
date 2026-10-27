#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= 10; i++) {
        if (i > 1) printf(" ");
        printf("%lld", (long long)n * i);
    }
    printf("\n");
    return 0;
}
