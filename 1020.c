#include <stdio.h>

int main(void){

    int valoremdias, resto;
    int mes, ano;

    scanf("%d", &valoremdias);
    resto = valoremdias;

    ano = resto / 365;
    resto = resto - (ano * 365);

    mes = resto / 30;
    resto = resto - (mes * 30);

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", resto);

    return 0;
}