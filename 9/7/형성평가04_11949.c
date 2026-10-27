#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2 * (n - i); j++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
