#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char a[10];
    int i;
    for (i = 0; i < 10; i++) {
        if (scanf(" %c", &a[i]) != 1) return 0;
    }
    for (i = 9; i >= 0; i--) {
        printf("%c%c", a[i], i == 0 ? '\n' : ' ');
    }
    return 0;
}
