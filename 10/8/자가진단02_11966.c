#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++) a[i] = i + 1;
    for (i = 0; i < 10; i++) {
        printf("%d%c", a[i], i == 9 ? '\n' : ' ');
    }
    return 0;
}
