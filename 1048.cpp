#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float valor, resulatdo;

    int count = 1;
    while(count--){
        cin >> valor;
        if (valor >= 0 && valor<= 400) {
            resulatdo = valor + valor * 0.15;
            printf("Novo salario: %.2f\n", resulatdo);
            printf("Reajuste ganho: %.2f\n", resulatdo - valor);
            printf("Em percentual: 15 %\n");
        }else if (valor > 400 && valor <= 800) {
            resulatdo = valor + valor * 0.12;
            printf("Novo salario: %.2f\n", resulatdo);
            printf("Reajuste ganho: %.2f\n", resulatdo - valor);
            printf("Em percentual: 12 %\n");
        }else if (valor > 800 && valor <= 1200) {
            resulatdo = valor + valor * 0.10;
            printf("Novo salario: %.2f\n", resulatdo);
            printf("Reajuste ganho: %.2f\n", resulatdo - valor);
            printf("Em percentual: 10 %\n");
        }else if (valor > 1200 && valor <= 2000) {
            resulatdo = valor + valor * 0.07;
            printf("Novo salario: %.2f\n", resulatdo);
            printf("Reajuste ganho: %.2f\n", resulatdo - valor);
            printf("Em percentual: 7 %\n");
        }else{
            resulatdo = valor + valor * 0.04;
            printf("Novo salario: %.2f\n", resulatdo);
            printf("Reajuste ganho: %.2f\n", resulatdo - valor);
            printf("Em percentual: 4 %\n");
        }
    }

    return 0;
}
