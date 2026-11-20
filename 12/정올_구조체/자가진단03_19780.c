#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[256];
    int height;
};

int main(void) {
    struct Person people[3];
    int i;
    for (i = 0; i < 3; i++) {
        if (scanf("%255s %d", people[i].name, &people[i].height) != 2) return 0;
    }
    for (i = 0; i < 3; i++) {
        printf("%s : %dcm\n", people[i].name, people[i].height);
    }
    return 0;
}
