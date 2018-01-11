#include <stdio.h>

int main(void){

    int valoremseg, resto;
    int min, horas;

    scanf("%d", &valoremseg);
    resto = valoremseg;

    horas = resto / 3600;
    resto = resto - (horas * 3600);

    min = resto / 60;
    resto = resto - (min * 60);

    printf("%d:%d:%d\n", horas, min, resto);

    return 0;
}