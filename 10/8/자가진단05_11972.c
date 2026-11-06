#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int i, min;
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }
    min = a[0];
    for (i = 1; i < 10; i++) {
        if (a[i] < min) min = a[i];
    }
    printf("%d\n", min);
    return 0;
}
