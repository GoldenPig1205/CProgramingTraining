#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Point {
    double x, y;
};

int main(void) {
    struct Point a, b, center;
    if (scanf("%lf %lf", &a.x, &a.y) != 2) return 0;
    if (scanf("%lf %lf", &b.x, &b.y) != 2) return 0;
    center.x = (a.x + b.x) / 2;
    center.y = (a.y + b.y) / 2;
    printf("Center point = (%.1f, %.1f)\n", center.x, center.y);
    return 0;
}
