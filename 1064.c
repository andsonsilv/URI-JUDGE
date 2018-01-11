#include <stdio.h>

int main(void){


    float Vetor[6];
    float soma = 0, media = 0;
    int i, f = 0;
    for (i = 0; i < 6; ++i) {
        scanf("%f", &Vetor[i]);
        if(Vetor[i] >= 0){
            f++;
            soma = soma + Vetor[i];
        }
    }

    if (f == 0){
        Vetor[5] = Vetor[5] * (-1);
        soma = Vetor[5];
        media = soma;
    }
    else{
    media = soma / (f * 1.0);
    }
    printf("%d valores positivos\n", f);
    printf("%.1f\n", media);

    return 0;
}

