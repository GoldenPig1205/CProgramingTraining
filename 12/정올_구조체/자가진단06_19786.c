#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Score {
    char name[101];
    int kor, eng;
};

struct Score plus_(struct Score a, struct Score b) {
    struct Score result;
    strcpy(result.name, "Total");
    result.kor = a.kor + b.kor;
    result.eng = a.eng + b.eng;
    return result;
}

int main(void) {
    struct Score a, b, result;
    if (scanf("%100s %d %d", a.name, &a.kor, &a.eng) != 3) return 0;
    if (scanf("%100s %d %d", b.name, &b.kor, &b.eng) != 3) return 0;
    result = plus_(a, b);
    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);
    return 0;
}
