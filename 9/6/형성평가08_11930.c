#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int rows, columns;
    if (scanf("%d %d", &rows, &columns) != 2) return 0;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {

            if (j > 1) printf("   ");
            printf("%lld", (long long)i * j);
        }
        printf("\n");
    }
    return 0;
}
