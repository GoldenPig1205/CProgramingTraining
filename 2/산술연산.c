#include <stdio.h>


int main(){
    int a = 0;
    int b = 0;

    if(++a > 0 || ++b > 0){
        printf("참\n");  
    }

    printf("a: %d, b: %d\n", a, b);
}