#include <stdio.h>

int main(void){

    float val1, val2, cod1, cod2, q1,q2, res;
    scanf("%f %f %f", &cod1, &q1, &val1);
    scanf("%f %f %f", &cod2, &q2, &val2);
    res = (q1*val1)+(q2*val2);
    printf("VALOR A PAGAR: R$ %.2f\n", res);

    return 0;
}