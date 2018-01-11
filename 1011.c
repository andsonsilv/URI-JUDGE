#include <stdio.h>
#include <math.h>

int main(void){
    double r, res;
    scanf("%lf", &r);
    res= (4.0/3) * 3.14159 * pow(r,3);
    printf("VOLUME = %.3lf\n", res);

    return 0;
}