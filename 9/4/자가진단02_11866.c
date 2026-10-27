#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int height, weight, value;
    if (scanf("%d %d", &height, &weight) != 2) return 0;
    value = weight + 100 - height;
    printf("%d\n", value);
    if (value > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }
    return 0;
}
