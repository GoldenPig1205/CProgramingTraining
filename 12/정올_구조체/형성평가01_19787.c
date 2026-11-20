#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[101], tel[101], addr[101];
};

int main(void) {
    struct Person person;
    if (scanf("%100s %100s %100s", person.name, person.tel, person.addr) != 3) return 0;
    printf("name : %s\ntel : %s\naddr : %s\n", person.name, person.tel, person.addr);
    return 0;
}
