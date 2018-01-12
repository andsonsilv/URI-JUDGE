#include <stdio.h>

int main(void){

    int  valor, i, impar;
    scanf("%d", &valor);
    if (valor > 0) {

        for (i = valor; i < (valor + 12); i++) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}