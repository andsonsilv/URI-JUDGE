#include <stdio.h>
int comparar(char nome[100]){
    if (nome[0] == 'T' && nome[1] == 'h' && nome[2] == 'o' && nome[3] == 'r') {
       return 1;
    } else {
        return 2;
    }
}

int main(void){

    char nome[100];
    int a;
    int forca;
    scanf("%d", &a);
    int i, compararrr[a];
    for (i = 0; i < a; i++) {
        scanf( "%s", nome);
        scanf("%d", &forca);
        compararrr[i] = comparar(nome);
    }
    for (i = 0; i < a; i++) {
        if (compararrr[i] == 1) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}

