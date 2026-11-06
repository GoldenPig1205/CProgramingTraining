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
    for (i = n - 1; i >= 0; i--) {
        printf("%d%c", a[i], i == 0 ? '\n' : ' ');
    }
    return 0;
}
