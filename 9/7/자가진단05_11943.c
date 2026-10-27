#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    char ch = 'A';
    if (scanf("%d", &n) != 1) return 0;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
