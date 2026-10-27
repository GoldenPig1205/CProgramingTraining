#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, count = 0;
    long long sum = 0;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (long long i = a; i <= b; i++) {

        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }
    double average = count > 0 ? (double)sum / count : 0.0;
    printf("sum : %lld\navg : %.1f\n", sum, average);
    return 0;
}
