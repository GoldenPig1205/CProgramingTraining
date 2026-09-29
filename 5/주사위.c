#include <stdio.h>

int main(){
    int counts[7] = {0};
    int number;

    for (int i = 0; i < 10; i++){
        if (scanf("%d", &number) != 1 || number < 1 || number > 6){
            printf("1부터 6까지만 입력해주세요!\n");
            return 1;
        }
        counts[number]++;
    }

    for (int i = 1; i <= 6; i++){
        printf("%d: %d\n", i, counts[i]);
    }

    return 0;
}