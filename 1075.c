#include <stdio.h>

int main(void){
    int n, i;
    scanf("%d", &n);
    if (n <10000) {
        for(i = 1; i < 10000; i++){
            if(i % n == 2){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}

