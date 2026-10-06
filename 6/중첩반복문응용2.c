#include <stdio.h>

int main(){
    int star;

    for (int i = 1; i <= 6; i++) {
        if (i <= 3)
            star = i;
        else
            star = 7 - i;

        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}