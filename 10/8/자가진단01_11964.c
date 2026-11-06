#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char a[10];
    int i;
    for (i = 0; i < 10; i++) {
        if (scanf(" %c", &a[i]) != 1) return 0;
    }
    for (i = 0; i < 10; i++) printf("%c", a[i]);
    printf("\n");
    return 0;
}
