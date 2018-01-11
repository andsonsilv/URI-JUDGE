#include <stdio.h>

int main(void){

    float la, lb, lc, at, pt;

    scanf("%f %f %f", &la, &lb, &lc);

        if (la >= (lb + lc) || lb >= (la + lc) || lc >= (la + lb)){
            at = (((la + lb) / 2 ) * lc);
            printf("Area = %.1f\n", at);
        } else {
            pt = la + lb + lc;
            printf("Perimetro = %.1f\n", pt);
        }
    return 0;
}