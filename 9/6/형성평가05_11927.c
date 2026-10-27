#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int number, even = 0, odd = 0;
    for (int i = 0; i < 10; i++) {
        if (scanf("%d", &number) != 1) return 0;
        if (number % 2 == 0) even++;
        else odd++;
    }
    printf("even : %d\nodd : %d\n", even, odd);
    return 0;
}
