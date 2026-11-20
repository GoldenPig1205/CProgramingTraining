#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[256];
    int height;
};

int main(void) {
    struct Person people[5];
    int i, min = 0;
    for (i = 0; i < 5; i++) {
        if (scanf("%255s %d", people[i].name, &people[i].height) != 2) return 0;
    }
    for (i = 1; i < 5; i++) {
        if (people[i].height < people[min].height) min = i;
    }
    printf("%s %d\n", people[min].name, people[min].height);
    return 0;
}
