#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int count[11] = {0};
    int n, i;
    while (scanf("%d", &n) == 1 && n != 0) count[n / 10]++;
    for (i = 10; i >= 0; i--) {
        if (count[i] > 0) printf("%d : %d\n", i * 10, count[i]);
    }
    return 0;
}
