#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[5][5] = {0};
    int i, j;
    for (i = 0; i < 5; i++) {
        a[i][0] = 1;
        for (j = 1; j <= i; j++) a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d%c", a[i][j], j == i ? '\n' : ' ');
        }
    }
    return 0;
}
