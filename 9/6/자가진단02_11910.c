#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    for (int i = 10; i <= 20; i++) {
        if (i > 10) printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
