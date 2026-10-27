#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n == 0) printf("zero\n");
    else if (n > 0) printf("plus\n");
    else printf("minus\n");
    return 0;
}
