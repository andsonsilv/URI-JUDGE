#include <stdio.h>

int main(void){
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    while(a != b){
        if(a > b){
            printf("Decrescente\n");
        }else
            printf("Crescente\n");
        scanf("%d %d", &a, &b);
    }
    return 0;
}