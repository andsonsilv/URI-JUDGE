#include <stdio.h>

int main(void){

    float n1, n2, n3, n4, media, exame, maf;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/ 10;

    if(media < 5){
        printf("Media: %.1f\nAluno reprovado.\n", media);
    } else if (media > 7){
        printf("Media: %.1f\nAluno aprovado.\n", media);
    } else if (media >= 5 && media <= 6.9){
        scanf("%f", &exame);
        maf = (exame + media) / 2;
        if (maf >= 5){
            printf("Media: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", exame);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", maf);
        } else if (maf < 5){
            printf("Media: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", exame);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", maf);
        }
    }

    return 0;
}
