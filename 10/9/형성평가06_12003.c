#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[5][7] = {{0, 1, 0, 1, 0, 1, 0}};
    int i, j;
    for (i = 1; i < 5; i++) {
        for (j = 1; j <= 5; j++) a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
    }
    for (i = 0; i < 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d%c", a[i][j], j == 5 ? '\n' : ' ');
        }
    }
    return 0;
}
