#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, number = 1;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (j > 0) printf(" ");
            printf("%d", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
