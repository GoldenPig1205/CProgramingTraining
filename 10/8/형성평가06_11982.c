#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a[100];
    int i, n = 0, count = 0;
    long long sum = 0;
    double avg = 0;
    while (n < 100) {
        if (scanf("%d", &a[n]) != 1 || a[n] == 0) break;
        n++;
    }
    for (i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            count++;
            sum += a[i];
        }
    }
    if (count > 0) avg = (double)sum / count;
    printf("Multiples of 5 : %d\nsum : %lld\navg : %.1f\n", count, sum, avg);
    return 0;
}
