#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
    char name[101], tel[101], addr[101];
};

int main(void) {
    struct Person people[3];
    int i, first = 0;
    for (i = 0; i < 3; i++) {
        if (scanf("%100s %100s %100s", people[i].name, people[i].tel, people[i].addr) != 3) return 0;
        if (strcmp(people[i].name, people[first].name) < 0) first = i;
    }
    printf("name : %s\ntel : %s\naddr : %s\n", people[first].name, people[first].tel, people[first].addr);
    return 0;
}
