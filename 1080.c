#include <stdio.h>

int Maior(int Tamanho, int Vetor[]){
    int i, Maior;
    Maior = Vetor[1];
    for (i = 2; i <= Tamanho; i++) {
        if (Vetor[i] > Maior ) {
            Maior = Vetor[i];
        }
    }
    return Maior;
}

int posicao(int Tamanho, int Vetor[]){
    int i, posicao, maior;
    maior = Vetor[1];
    for (i = 2; i <= Tamanho; i++) {
        if (Vetor[i] > maior ) {
            maior = Vetor[i];
            posicao = i;
        }
    }
    return posicao;
}

void Inicializacao(int Tamanho, int Vetor[]){
    int i;
    for (i = 1; i <= Tamanho; i++) {
        scanf("%d", &Vetor[i]);
    }
}

int main(void){
    int T = 100;
    int VetordoVetor[T];
    Inicializacao(T, VetordoVetor);
    int ResMaior = Maior(T, VetordoVetor);
    int Res = posicao(T, VetordoVetor);
    printf("%d\n", ResMaior);
    if(Res == 101){
        printf("1\n");
    }else{
        printf("%d\n", Res);
    }
    return 0;
}
