#include <stdio.h>

int main(void){

    int Quant, i;
    int valor;
    scanf("%d", &Quant);
    if (valor < 10000){
        for (i = 0; i < Quant; i++) {
            scanf("%d", &valor);
            if (valor % 2 == 0 && valor > 0) {
                printf("EVEN POSITIVE\n");
            }
            else if (valor % 2 != 0 && valor > 0) {
                printf("ODD POSITIVE\n");
            }
            else if (valor % 2 != 0 && valor < 0) {
                printf("ODD NEGATIVE\n");
            }
            else if (valor % 2 == 0 && valor < 0) {
                printf("EVEN NEGATIVE\n");
            } else {
                printf("NULL\n");
            }

        }

    }

    return 0;
}
