#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[256];
    int age;
};

int main(void) {
    struct Person person;
    if (scanf("%255s %d", person.name, &person.age) != 2) return 0;
    printf("Your name is %s and you are %d years old.\n", person.name, person.age);
    return 0;
}
