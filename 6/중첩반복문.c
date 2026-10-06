#include <stdio.h>

int main(){
    char ch = '*';
    for (int i = 0; i < 5; i++){ // 별 5개까지 갈 거니까 5번
        printf("%c", ch);
        for (int j = 1; j <= i; j++){ // 반복하는동안 별을 하나씩 감소
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}