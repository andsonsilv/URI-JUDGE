#include <stdio.h>

int main(){

    int i;
    double valor = 0;
    double vetor[100];
    scanf("%lf", &valor);

    for(i = 0; i < 100; i++){
        vetor[i] = valor;
        valor = valor / 2;
    }
    for(i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }

    return 0;

}