#include <stdio.h>
void Tabuada(int numero){
    int i, res;
    for(i = 1; i <= 10; i++){
        res = numero * i;
        printf("%d x %d = %d\n", i, numero, res);
    }
}

int main(void){
    int Valor;
    scanf("%d", &Valor);
    if(Valor > 2 && Valor < 1000){
        Tabuada(Valor);
    }
    return 0;
}