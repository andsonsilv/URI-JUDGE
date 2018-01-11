#include <stdio.h>
#include <math.h>

int main(void){
    float distancia, horas,vm, r;
    scanf("%f %f", &horas, &vm);
    distancia = horas * vm;
    r = distancia / 12;
    printf("%.3f\n", r);

	return 0;

}