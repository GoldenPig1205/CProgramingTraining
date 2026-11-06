#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Back";
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;

    int len = strlen(str1); // str1의 길이 계산
    printf("str1의 길이: %d\n", len);

    strcpy(str3, str1); // str1을 str3에 복사
    printf("str1을 str3에 복사: %s\n", str3);

    strncpy(str1, str2, n); // str2의 처음 n글자를 str1에 복사
    str3[n] = '\0'; // str3의 끝에 null 문자 추가
    printf("str2의 처음 %d글자를 str1에 복사: %s\n", n, str1);
}