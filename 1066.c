#include <stdio.h>

int main(){

    int Vetor[5];
    int i = 0, j = 0, k = 0, m =0, e =0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &Vetor[i]);
        if (Vetor[i] > 0) {
            j++;
        }
    }
    for (i = 0; i < 5; i++) {
        if (Vetor[i] < 0) {
            k++;
        }
    }
    for (i = 0; i < 5; i++) {
        if (Vetor[i] % 2 == 0) {
            m++;
        }
    }
    for (i = 0; i < 5; i++) {
        if (Vetor[i] % 2 != 0) {
            e++;
        }
    }
    printf("%d valor(es) par(es)\n", m);
    printf("%d valor(es) impar(es)\n", e);
    printf("%d valor(es) positivo(s)\n", j);
    printf("%d valor(es) negativo(s)\n", k);

    return 0;
}

