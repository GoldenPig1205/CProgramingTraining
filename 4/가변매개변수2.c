#include <stdio.h>

void sumall(int num){
    if (num == 0){
        return;
    }
    sumall(num-1);
    printf("%d\n", num);
}

int main(void){
    int n;
    scanf("%d", &n);
    sumall(n);
    return 0;
}