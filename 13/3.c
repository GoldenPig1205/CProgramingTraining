#include <stdio.h>

int main(void) {
    char food[5];

    printf("좋아하는 음식은?\n");
    if (scanf("%4s", food) == 1) {
        printf("좋아하는 음식: %s\n", food);
    }

    return 0;
}
