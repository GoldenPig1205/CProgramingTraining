#include <stdio.h>

int main(){
    int counts[11] = {0};
    int number;

    while (1){
        if (scanf("%d", &number) != 1){
            break;
        }

        if (number == 0){
            break;
        }
        if (number < 0 || number > 100){
            printf("점수는 0부터 100 사이여야 합니다.\n");
            return 1;
        }

        counts[number / 10]++;
    }

    for (int i = 1; i <= 10; i++){
        if (counts[i] > 0){
            printf("%d: %d\n", i * 10, counts[i]);
        }
    }

    return 0;
}