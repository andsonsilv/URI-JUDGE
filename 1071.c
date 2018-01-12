#include<stdio.h>

int main(){

    int valor1, valor2;
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    int i, soma = 0;
    if (valor1 < valor2) {
        for (i = valor1 + 1; i < valor2; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
        printf("%d\n", soma);

    }
    else if(valor1 > valor2) {
        for (i = valor2 + 1; i < valor1; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }
        printf("%d\n", soma);

    } else {
        printf("0\n");
    }

    return 0;
}
