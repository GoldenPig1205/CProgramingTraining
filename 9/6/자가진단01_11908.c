#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch;
    if (scanf(" %c", &ch) != 1) return 0;
    for (int i = 0; i < 20; i++) printf("%c", ch);
    printf("\n");
    return 0;
}
