#include <stdio.h>
int main(void){

    int valor;
    scanf("%d", &valor);
    int i;
    if(valor > 0){
        for(i = 1; i <= valor; i++){
            if(valor % i == 0){
                printf("%d\n", i);
            }
        }
    }else if(valor < 0){
        for(i = -1; i >= valor; i--){
            if(valor % i == 0){
                printf("%d\n%d\n", i, i * -1);
            }
        }
    }
    
    return 0;
}

