#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, small = 0, large = 0;
    while (scanf("%d", &n) == 1) {
        if (n < 50) small++;
        else large++;
        if (n >= 100) break;
    }
    printf("small : %d\n", small);
    printf("large : %d\n", large);
    return 0;
}
