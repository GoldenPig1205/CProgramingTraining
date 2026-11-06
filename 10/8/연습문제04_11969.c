#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    while (scanf("%d", &month) == 1) {
        if (month < 1 || month > 12) break;
        printf("%d\n", days[month - 1]);
    }
    return 0;
}
