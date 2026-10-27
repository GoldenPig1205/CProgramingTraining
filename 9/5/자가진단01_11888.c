#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i = 1;
    while (i <= 15) {
        if (i > 1) printf(" ");
        printf("%d", i);
        i++;
    }
    printf("\n");
    return 0;
}
