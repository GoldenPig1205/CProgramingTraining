#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, number = 0;
    char letter = 'A';
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) printf(" ");
            if (j < n - i) printf("%c", letter++);
            else printf("%d", number++);
        }
        printf("\n");
    }
    return 0;
}
