#include <stdio.h>

int main(void){
    int valor;
    int i = 2002;
    scanf("%d", &valor);
    if(valor == i){
        printf("Acesso Permitido\n");
    }else{
        printf("Senha Invalida\n");
    }
    while(valor != i){
        scanf("%d", &valor);
        if(valor == i){
            printf("Acesso Permitido\n");
        }else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

