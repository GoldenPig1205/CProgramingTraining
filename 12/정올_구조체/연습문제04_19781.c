#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student {
    char name[256];
    int score;
};

int main(void) {
    struct Student students[5];
    int i, max = 0;
    for (i = 0; i < 5; i++) {
        if (scanf("%255s %d", students[i].name, &students[i].score) != 2) return 0;
    }
    for (i = 1; i < 5; i++) {
        if (students[i].score > students[max].score) max = i;
    }
    printf("%s %d\n", students[max].name, students[max].score);
    return 0;
}
