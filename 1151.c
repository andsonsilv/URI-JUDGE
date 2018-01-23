#include<stdio.h>
#include<stdlib.h>

int main (void){
    
    int soma, n, f, x, contador, r = 0;
    scanf("%d",&n);
    if (n > 0 && n < 46){
        f = 1;
        contador = 0;
        x = 0;
        printf("%d ", r);
        while(contador < n-2){
            soma = f + x;
            x = f;
            f = soma;
            contador ++;
            printf("%d ", x);
        }
        printf("%d", f);
    }
    printf("\n");
    
    return 0;    
}
