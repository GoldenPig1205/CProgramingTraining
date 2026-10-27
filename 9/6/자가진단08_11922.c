#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    for (int dan = 2; dan <= 4; dan++) {
        for (int i = 1; i <= 5; i++) {
            if (i > 1) printf("   ");
            printf("%d * %d = %2d", dan, i, dan * i);
        }
        printf("\n");
    }
    return 0;
}
