#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 학생 구조체 변수 정의 (근데 난 바깥에다가 함)
struct Student {
    char name[50];
    int score;
};

int main(void) {
    struct Student s;
    FILE *fp, *pass, *fail;
    int count, i;

    printf("학생 수: ");
    if (scanf("%d", &count) != 1 || count < 0) return 1;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("students.txt 파일을 열 수 없습니다.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        printf("이름과 점수: ");
        if (scanf("%49s %d", s.name, &s.score) != 2) {
            fclose(fp);
            return 1;
        }
        fprintf(fp, "%s %d\n", s.name, s.score);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    pass = fopen("pass.txt", "w");
    fail = fopen("fail.txt", "w");
    if (fp == NULL || pass == NULL || fail == NULL) {
        printf("파일을 열 수 없습니다.\n");
        if (fp != NULL) fclose(fp);
        if (pass != NULL) fclose(pass);
        if (fail != NULL) fclose(fail);
        return 1;
    }

    while (fscanf(fp, "%49s %d", s.name, &s.score) == 2) {
        if (s.score >= 80)
            fprintf(pass, "%s %d\n", s.name, s.score);
        else
            fprintf(fail, "%s %d\n", s.name, s.score);
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);
    printf("파일 저장 및 분류 완료!\n");
    return 0;
}
