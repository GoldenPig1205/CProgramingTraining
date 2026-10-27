#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int menu;
    if (scanf("%d", &menu) != 1) return 0;
    switch (menu) {
        case 1: printf("You selected ADD.\n"); break;
        case 2: printf("You selected EDIT.\n"); break;
        case 3: printf("You selected DEL.\n"); break;
        default: printf("Wrong choice.\n"); break;
    }
    return 0;
}
