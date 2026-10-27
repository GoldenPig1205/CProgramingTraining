#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    if (a > 0 && b > 0 && c > 0) printf("All Positive\n");
    else if (a == 0 || b == 0 || c == 0) printf("Contain Zero\n");
    else printf("Mixed\n");
    return 0;
}
