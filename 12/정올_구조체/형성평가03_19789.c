#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Rectangle {
    int x1, y1, x2, y2;
};

int main(void) {
    struct Rectangle a, b, result;
    if (scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2) != 4) return 0;
    if (scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2) != 4) return 0;
    result.x1 = a.x1 < b.x1 ? a.x1 : b.x1;
    result.y1 = a.y1 < b.y1 ? a.y1 : b.y1;
    result.x2 = a.x2 > b.x2 ? a.x2 : b.x2;
    result.y2 = a.y2 > b.y2 ? a.y2 : b.y2;
    printf("%d %d %d %d\n", result.x1, result.y1, result.x2, result.y2);
    return 0;
}
