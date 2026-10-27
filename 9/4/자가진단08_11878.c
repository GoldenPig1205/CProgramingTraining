#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double score;
    if (scanf("%lf", &score) != 1) return 0;
    if (score >= 4.0) printf("scholarship\n");
    else if (score >= 3.0) printf("next semester\n");
    else if (score >= 2.0) printf("seasonal semester\n");
    else printf("retake\n");
    return 0;
}
