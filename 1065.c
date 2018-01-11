#include <stdio.h>

int main(void){

    int vetor[5];
    int j = 0;

    int i;
    for (i = 0; i < 5; ++i) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            j++;

        }

    }
    printf("%d valores pares\n", j);

    return 0;
}
