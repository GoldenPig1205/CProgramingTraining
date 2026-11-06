#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[5] = {95, 75, 85, 100, 50};
    int i, j, temp;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d%c", a[i], i == 4 ? '\n' : ' ');
    }
    return 0;
}
