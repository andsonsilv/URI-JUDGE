#include <stdio.h>

int main(void){

    int quantvezes = 0;
    scanf("%d", &quantvezes);
    int i = 0, j = 0;
    char Animal = 0;
    int numero = 0, C = 0, S = 0, R = 0;
    for(i = 0; i < quantvezes; i++){
        scanf("%d", &numero);
        scanf(" %c", &Animal);
        if(numero >= 1 && numero <=15){
            if(Animal == 'C'){
                for(j = 0; j < numero; j++){
                    C++;
                }
            }else if(Animal == 'S'){
                for (j = 0; j < numero; j++){
                    S++;
                }
            }else if (Animal == 'R') {
                for (j = 0; j < numero; j++){
                    R++;
                }
            }
        }
    }
    printf("Total: %d cobaias\n", R + S + C);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2f %%\n", ((C * 1.0) / (R + S + C)) * 100);
    printf("Percentual de ratos: %.2f %%\n", ((R * 1.0) / (R + S + C)) * 100);
    printf("Percentual de sapos: %.2f %%\n", ((S * 1.0) / (R + S + C)) * 100);
    return 0;
}

