#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 9; i++) {
        for (int dan = 2; dan <= 4; dan++) {
            if (dan > 2) printf("   ");
            printf("%d * %d = %2d", dan, i, dan * i);
        }
        printf("\n");
    }
    return 0;
}
