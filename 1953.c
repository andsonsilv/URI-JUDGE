#include <stdio.h>
#include <string.h>

int main(){

    int n = 0, epr = 0, ehd = 0, intrusos = 0, aux = 0, i = 0;

    char curso[128];

    while (scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++){
            scanf("%d %s", &aux, curso);
            if(strcmp(curso, "EPR") == 0){
                epr++;
            }else if(strcmp(curso, "EHD") == 0){
                ehd++;
            }else{
                intrusos++;
            }
            strcpy(curso, "");
        }
        printf("EPR: %d\n", epr);
        printf("EHD: %d\n", ehd);
        printf("INTRUSOS: %d\n", intrusos);
        ehd = 0;
        epr = 0;
        intrusos = 0;
    }
    return 0;
}
