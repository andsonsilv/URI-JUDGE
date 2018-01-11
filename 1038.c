#include <stdio.h>

int main(void){

    int Codproduto, Quantidade;
    double saida;

    scanf("%d %d", &Codproduto,&Quantidade);
    if (Codproduto == 1 ){

        saida = 4.00 * Quantidade;
        printf("Total: R$ %.2lf\n", saida);
    } else if (Codproduto == 2 ){

        saida = 4.50 * Quantidade;
        printf("Total: R$ %.2lf\n", saida);
    } else if (Codproduto == 3 ){

        saida = 5.00 * Quantidade;
        printf("Total: R$ %.2lf\n", saida);
    } else if (Codproduto == 4 ){

        saida = 2.00 * Quantidade;
        printf("Total: R$ %.2lf\n", saida);
    } else if (Codproduto == 5 ){

        saida = 1.50 * Quantidade;
        printf("Total: R$ %.2lf\n", saida);
    }

    return 0;
}
