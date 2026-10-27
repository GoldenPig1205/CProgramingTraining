#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    if (a >= 4 && b >= 4) printf("WIN.\n");
    else if (a >= 4 || b >= 4) printf("DRAW.\n");
    else printf("LOSE.\n");
    return 0;
}
