#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, number = 1;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * i; j++) printf(" ");
        for (int j = 0; j < n - i; j++) {
            if (j > 0) printf(" ");
            printf("%d", number++);
        }
        printf("\n");
    }
    return 0;
}
