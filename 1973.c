#include <stdio.h>


int main(void){

    long long int valordesitio;

    scanf("%lld", &valordesitio);

    long long int vetor[valordesitio];
    long long int a[valordesitio];


    long long int i, soma = 0, quant = 0;
    long long int Dif = 0, soam = 0;

    for (i = 0; i < valordesitio; i++) {
        a[i] = 0;
    }

    for (i = 0; i < valordesitio; i++) {
        scanf("%lld", &vetor[i]);
    }
    for (i = 0; i < valordesitio; i++) {
        soma = soma + vetor[i];
    }


    for (i = 0; (i < valordesitio) && (i >= 0);) {
        if (vetor[i] != 0) {
            quant++;
            a[i] = 1;
        }
        if (vetor[i] % 2 == 0) {
            if (vetor[i] == 0){

            }
            else{
                vetor[i] = vetor[i] - 1;
            }
            i--;
        } else{
            if (vetor[i] == 0){

            }
            else {
                vetor[i] = vetor[i] - 1;
                i++;
            }
        }

    }

    for (i = 0; i < valordesitio; i++) {
        soam = soam + a[i];
    }

    Dif = soma - quant;

    printf("%lld %lld\n", soam, Dif);

     return 0;
}
