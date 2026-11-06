#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int count[10] = {0};
    int n, i;
    while (scanf("%d", &n) == 1 && n != 0) count[n / 10]++;
    for (i = 0; i < 10; i++) {
        if (count[i] > 0) printf("%d : %d\n", i, count[i]);
    }
    return 0;
}
