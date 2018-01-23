#include <stdio.h>

int main(void){

    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int i;
    for(i = n1 + 1; i < n2; ++i){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }
    for(i = n2 + 1; i < n1; ++i){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }
    }
    return 0;
}