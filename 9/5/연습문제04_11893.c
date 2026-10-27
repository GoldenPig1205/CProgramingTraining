#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, count = 0;
    long long sum = 0;
    while (scanf("%d", &n) == 1 && n != 0) {
        count++;
        sum += n;
    }
    double avg = 0;
    if (count > 0) avg = (double)sum / count;
    printf("cnt = %d\n", count);
    printf("sum = %lld\n", sum);
    printf("avg = %.2f\n", avg);
    return 0;
}
