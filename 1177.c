#include <stdio.h>

int main(void){

    int repetir = 0;
    scanf("%d", &repetir);
    if(repetir >= 2 && repetir <= 50){
        int i = 0, j = 0;
        for(i = 0; i < 1000;){
            for(j = 0; j < repetir; j++) {
                printf("N[%d] = %d\n", i, j);
                i++;
                if(i >= 1000){
                    break;
                }
            }
    }

    return 0;
}