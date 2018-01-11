#include <stdio.h>
#include <math.h>
int main(void){

    float delta, baskara1, baskara2, denominador, a, b, c;

    scanf("%f %f %f", &a, &b, &c);
    denominador = 2 * a;
    delta = (b*b) -4 * a * c;
    if (delta > 0 && denominador != 0){
       baskara1 = ((-b + sqrt(delta))/ denominador);
       baskara2 = ((-b - sqrt(delta))/ (denominador));
       printf("R1 = %.5f\n", baskara1);
       printf("R2 = %.5f\n", baskara2);
    }else{
        printf("Impossivel calcular\n");
    }

  return 0;
}
