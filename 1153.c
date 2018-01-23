#include <stdio.h>

int main(void){

    int fatorial = 1 ,n, contador = 1;
	scanf("%d", &n);
	while (contador <= n) {
        fatorial = fatorial * contador;
        contador++;
	}
    
    printf("%d\n", fatorial);
	return 0;
}