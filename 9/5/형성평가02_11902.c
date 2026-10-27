#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, odd = 0, even = 0;

    while (scanf("%d", &n) == 1 && n != 0) {
        if (n % 2 == 0) even++;
        else odd++;
    }
    printf("odd : %d\neven : %d\n", odd, even);
    return 0;
}
