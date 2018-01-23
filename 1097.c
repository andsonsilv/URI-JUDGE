#include <stdio.h>

int main(void){
    int i, j = 1, z = 7, hh = 6, cc = 5;
    for(i = 0; i < 5; i++){
        printf("I=%d J=%d\n", j, z);
        printf("I=%d J=%d\n", j, hh);
        printf("I=%d J=%d\n", j, cc);
        j = j + 2;
        z = z + 2;
        hh = hh + 2;
        cc = cc + 2;
    }
    return 0;
}