#include <stdio.h>
#include <math.h>
int main(void){


    double valor1, valor2, resulatdo;
    scanf("%lf", &valor1);
    scanf("%lf", &valor2);
    resulatdo = ((valor1 * 3.5) + (valor2 * 7.5)) / 11.0;
    printf("MEDIA = %.5f\n", resulatdo);
    
    return 0;
}