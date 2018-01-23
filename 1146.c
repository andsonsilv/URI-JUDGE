#include <stdio.h>

int main(){

    int a = 1;
    int i;
    while(a  != 0){
        scanf("%d", &a);
        for(i = 1; i < a; i++){
            printf("%d ", i);
        }
        if(a != 0){
            printf("%d", a);
            printf("\n");
        }
    }
    
    return 0;
}
