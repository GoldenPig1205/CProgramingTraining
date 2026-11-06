#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    if (scanf("%d %d", &a[0], &a[1]) != 2) return 0;
    for (i = 2; i < 10; i++) a[i] = (a[i - 2] + a[i - 1]) % 10;
    for (i = 0; i < 10; i++) {
        printf("%d%c", a[i], i == 9 ? '\n' : ' ');
    }
    return 0;
}
