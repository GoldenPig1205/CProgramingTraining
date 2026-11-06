#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[10];
    int i, j, temp;
    for (i = 0; i < 10; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d%c", a[i], i == 9 ? '\n' : ' ');
    }
    return 0;
}
