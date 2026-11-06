#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int count[11] = {0};
    int n, i;
    while (scanf("%d", &n) == 1) {
        if (n < 1 || n > 10) break;
        count[n]++;
    }
    for (i = 1; i <= 10; i++) {
        if (count[i] > 0) printf("%d : %d\n", i, count[i]);
    }
    return 0;
}
