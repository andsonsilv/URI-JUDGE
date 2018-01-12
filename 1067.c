#include <stdio.h>

int main(void){

    int  valor, i;
    scanf("%d", &valor);
    if (valor >= 1 && valor  <= 1000) {
        for (i = 1; i <= valor; i++) {
            if (i % 2 != 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}