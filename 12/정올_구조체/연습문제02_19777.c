#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[256];
    int age;
};

int main(void) {
    struct Person me = {"Yejun", 12};
    struct Person friend;
    if (scanf("%255s %d", friend.name, &friend.age) != 2) return 0;
    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", friend.name, friend.age);
    return 0;
}
