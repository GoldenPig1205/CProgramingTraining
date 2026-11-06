#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[20] = {1, 1};
    int i;
    for (i = 2; i < 20; i++) a[i] = a[i - 2] + a[i - 1];
    for (i = 0; i < 20; i++) {
        printf("%d%c", a[i], i == 19 ? '\n' : ' ');
    }
    return 0;
}
