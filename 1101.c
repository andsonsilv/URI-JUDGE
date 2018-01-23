#include <stdio.h>

int main(){

    int valor1, valor2, maior, menor, i, soma = 0;
    while(1){
        scanf("%d %d", &valor1, &valor2);
        if(valor1 <=0 || valor2 <= 0)
            break;
        maior = valor1>valor2? valor1:valor2;
        menor = valor1<valor2? valor1:valor2;
        for(i = menor; i <= maior; i++){
            soma = i + soma;
            printf("%d ", i);
        }
        printf("Sum=%d\n", soma);
        soma = 0;
    }
    return 0;
}