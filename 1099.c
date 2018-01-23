#include <stdio.h>

int main(void){

    int casoteste;
    scanf("%d", &casoteste);

    int i = 0,j = 0, a = 0,b = 0, somaimpares[casoteste];

    for(i = 0; i < casoteste; i++){
        scanf("%d", &a);
        scanf("%d", &b);
        somaimpares[i] = 0;
        if(a < b){
            for(j = a + 1; j < b; j++){
                if (j % 2 == 1) {
                    somaimpares[i] = somaimpares[i] + j;
                }
            }
        }else{
            for(j = b + 1; j < a; j++){
                if(j % 2 == 1){
                    somaimpares[i] = somaimpares[i] + j;
                }
            }
        }
    }
    for(i = 0; i < casoteste; i++){
        printf("%d\n", somaimpares[i]);
    }
    return 0;
}

