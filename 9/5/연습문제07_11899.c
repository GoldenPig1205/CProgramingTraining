#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 7;
    int a = x;
    if (scanf("%d", &x) != 1) return 0;
    int b = x;
    x += 3;
    int c = x;
    printf("%d\n", x);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
