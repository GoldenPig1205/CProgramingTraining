#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (n > 0) printf("positive number\n");
        else printf("negative number\n");
    }
    return 0;
}
