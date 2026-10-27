#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n > 0) {
        if (n % 2 == 0) printf("Even Number\n");
        else printf("Odd Number\n");
    } else {
        printf("Non positive\n");
    }
    return 0;
}
