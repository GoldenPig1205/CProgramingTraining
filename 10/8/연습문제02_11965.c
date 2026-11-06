#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char a[26];
    int i;
    for (i = 0; i < 26; i++) a[i] = 'A' + i;
    for (i = 25; i >= 0; i--) {
        printf("%c%c", a[i], i == 0 ? '\n' : ' ');
    }
    return 0;
}
