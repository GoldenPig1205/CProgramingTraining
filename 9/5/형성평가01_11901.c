#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, i = 1;
    if (scanf("%d", &n) != 1) return 0;
    while (i <= n) {
        if (i > 1) printf(" ");
        printf("%d", i);
        i++;
    }
    printf("\n");
    return 0;
}
