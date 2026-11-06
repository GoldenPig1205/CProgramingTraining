#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int count[7] = {0};
    int i, n;
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &n) != 1) return 0;
        count[n]++;
    }
    for (i = 1; i <= 6; i++) printf("%d : %d\n", i, count[i]);
    return 0;
}
