#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    printf("%d\n", n);
    if (n < 0) printf("minus\n");
    return 0;
}
