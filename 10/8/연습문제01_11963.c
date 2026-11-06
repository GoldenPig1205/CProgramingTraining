#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }
    for (i = 0; i < 5; i++) {
        printf("%d%c", a[i], i == 4 ? '\n' : ' ');
    }
    return 0;
}
