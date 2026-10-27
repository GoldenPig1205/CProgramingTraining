#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 2;
    while (x < 5) {
        x++;  /* [A] */
    }
    int sum = 9;
    printf("%d\n", sum);
    return 0;
}
