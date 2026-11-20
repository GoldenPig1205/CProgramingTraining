#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student {
    char name[21];
    char school[21];
    int grade;
};

int main(void) {
    struct Student student;
    if (scanf("%20s %20s %d", student.name, student.school, &student.grade) != 3) return 0;
    printf("Name : %s\n", student.name);
    printf("School : %s\n", student.school);
    printf("Grade : %d\n", student.grade);
    return 0;
}
