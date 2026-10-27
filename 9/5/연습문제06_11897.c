#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int menu;
    do {
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\n");
        printf("Enter number: ");
        fflush(stdout);
        if (scanf("%d", &menu) != 1) return 0;
        printf("\n");
        switch (menu) {
            case 1: printf("You selected Input.\n"); break;
            case 2: printf("You selected Output.\n"); break;
            case 3: printf("You selected Delete.\n"); break;
            case 4: printf("You selected Finish.\n"); break;
            default: printf("Wrong input.\n"); break;
        }
        printf("\n");
    } while (menu != 4);
    return 0;
}
