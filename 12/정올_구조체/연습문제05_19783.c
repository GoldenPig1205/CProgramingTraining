#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
    char name[256];
    int height;
    double weight;
};

int main(void) {
    struct Person people[5], temp;
    int i, j;
    for (i = 0; i < 5; i++) {
        if (scanf("%255s %d %lf", people[i].name, &people[i].height, &people[i].weight) != 3) return 0;
    }
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (people[i].height > people[j].height) {
                temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", people[i].name, people[i].height, people[i].weight);
    }
    return 0;
}
