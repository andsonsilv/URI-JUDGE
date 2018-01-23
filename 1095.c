#include <stdio.h>

int main(void){
    int j;
    j = 65;
    int Z = -2;
    int i = 0;
    while(i <= 12){
        j = j - 5;
        Z = Z + 3;
        printf("I=%d J=%d\n",Z, j);
        i++;
    }
    return 0;
}