#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 20; i += 2) {
        if (i > 1) printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
