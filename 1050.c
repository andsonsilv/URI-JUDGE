#include <stdio.h>
#include <math.h>

int main(void){

    int tam;
    scanf("%d", &tam);

    if (tam == 61) {
        printf("Brasilia\n");
    }
    else if (tam == 71) {
        printf("Salvador\n");
    }
    else if (tam == 11) {
        printf("Sao Paulo\n");
    }
    else if (tam == 21) {
        printf("Rio de Janeiro\n");
    }
    else if (tam == 32) {
        printf("Juiz de Fora\n");
    }
    else if (tam == 19) {
        printf("Campinas\n");
    }
    else if (tam == 27) {
        printf("Vitoria\n");
    }
    else if (tam == 31) {
        printf("Belo Horizonte\n");
    } else {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}

