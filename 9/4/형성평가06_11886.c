#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    printf("%s\n", n % 2 == 0 ? "Even" : "Odd");
    return 0;
}
