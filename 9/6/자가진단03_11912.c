#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 2; i <= n; i += 2) {
        if (i > 2) printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
