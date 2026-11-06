#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int count[26] = {0};
    int i;
    char ch;
    while (scanf(" %c", &ch) == 1) {
        if (ch < 'A' || ch > 'Z') break;
        count[ch - 'A']++;
    }
    for (i = 0; i < 26; i++) {
        if (count[i] > 0) printf("%c : %d\n", 'A' + i, count[i]);
    }
    return 0;
}
