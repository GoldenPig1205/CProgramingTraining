#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student {
    char school[256];
    int grade;
};

int main(void) {
    struct Student first = {"Jejuelementary", 6};
    struct Student second;
    if (scanf("%255s %d", second.school, &second.grade) != 2) return 0;
    printf("%d grade in %s School\n", first.grade, first.school);
    printf("%d grade in %s School\n", second.grade, second.school);
    return 0;
}
