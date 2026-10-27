#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) printf("Hello for loop\n");
    return 0;
}
