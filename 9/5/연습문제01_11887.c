#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch = 'A';
    while (ch <= 'Z') {
        printf("%c", ch);
        ch++;
    }
    printf("\n");
    return 0;
}
