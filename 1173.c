#include <stdio.h>

int main(void){

    int Vetor[10];
    int i, tam;
    scanf("%d", &tam);

    if(tam > 0 && tam <= 50){
        Vetor[0] = tam;
        Vetor[1] = tam * 2;
        Vetor[2] = Vetor[1] * 2;
        Vetor[3] = Vetor[2] * 2;
        Vetor[4] = Vetor[3] * 2;
        Vetor[5] = Vetor[4] * 2;
        Vetor[6] = Vetor[5] * 2;
        Vetor[7] = Vetor[6] * 2;
        Vetor[8] = Vetor[7] * 2;
        Vetor[9] = Vetor[8] * 2;

        for(i = 0; i < 10; i++){
            printf("N[%d] = %d\n", i, Vetor[i]);
        }

    }

    return 0;
}

