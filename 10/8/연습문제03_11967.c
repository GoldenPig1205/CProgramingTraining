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
    for (i = 1; i < n; i += 2) {
        if (i > 1) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
