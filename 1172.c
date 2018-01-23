#include <stdio.h>

int main(void){

    int i, valor[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &valor[i]);
    }
    for(i = 0; i < 10; i++){
        if(valor[i] <= 0){
            printf("X[%d] = 1\n", i);

        }else{
            printf("X[%d] = %d\n", i, valor[i]);
        }
    }

    return 0;
}