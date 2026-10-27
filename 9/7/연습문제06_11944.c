#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch = 'a';
    int number = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j > 1) printf(" ");
            if (j <= i) {
                printf("%c", ch);
                ch++;
            } else {
                printf("%d", number);
                number++;
            }
        }
        printf("\n");
    }
    return 0;
}
