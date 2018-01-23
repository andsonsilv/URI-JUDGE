#include <stdio.h>

int Menor(int Tamanho, int Vetor[]){
    int i, menor;
    menor = Vetor[0];
    for (i = 1; i < Tamanho; i++) {
        if (Vetor[i] < menor ) {
            menor = Vetor[i];
        }
    }
    return menor;
}

int posicao(int Tamanho, int Vetor[]){
    int i, posicao, menor;
    menor = Vetor[0];
    for (i = 1; i < Tamanho; i++) {
        if (Vetor[i] < menor ) {
            menor = Vetor[i];
            posicao = i;
        }
    }
    return posicao;
}

void Inicializacao(int Tamanho, int Vetor[]){
    int i;
    for (i = 0; i < Tamanho; i++) {
        scanf("%d", &Vetor[i]);
    }

}

int main(void){
    int T;
    scanf("%d", &T);

    int VetordoVetor[T];

    Inicializacao(T, VetordoVetor);

    int resm = Menor(T, VetordoVetor);
    int resm1 = posicao(T, VetordoVetor);

    printf("Menor valor: %d\n", resm);
    printf("Posicao: %d\n", resm1);

    return 0;

}
