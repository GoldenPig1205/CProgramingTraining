#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c, min;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    min = a < b ? a : b;
    min = min < c ? min : c;
    printf("%d\n", min);
    return 0;
}
