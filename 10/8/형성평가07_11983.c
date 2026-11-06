#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[100];
    int i, n = 0;
    while (n < 100) {
        if (scanf("%d", &a[n]) != 1 || a[n] == 0) break;
        n++;
    }
    printf("%d\n", n);
    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        if (a[i] % 2 != 0) printf("%lld", (long long)a[i] * 2);
        else printf("%d", a[i] / 2);
    }
    printf("\n");
    return 0;
}
