#include <stdio.h>

int main(void){

    double salario, vendas, total;
    char nome[100];
    scanf("%s", nome);
    scanf("%lf %lf", &salario, &vendas);

    total= salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;

}