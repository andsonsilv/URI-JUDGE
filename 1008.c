#include <stdio.h>

int main(void){

    float func, horas, valor, sal;
    scanf("%f %f %f", &func, &horas, &valor);
    sal =  horas* valor;
    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", func, sal);

	return 0;
}