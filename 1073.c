#include <stdio.h>
#include <math.h>

int main(void){

    int tam;
    scanf("%d", &tam);
    int vet[tam];

    if (tam > 5 && tam < 2000) {


        int i;
        for (i = 2; i <= tam; ++i) {
            if (i % 2 == 0) {
                vet[i] = pow(i, 2);
            printf("%d^2 = %d\n", i, vet[i]);
            }


        }

    }
    
    return 0;
}

