#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[20];
    int n, i, j, temp;
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) return 0;
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 0;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) printf("%d\n", a[i]);
    return 0;
}
