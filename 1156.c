#include <stdio.h>

int main(){

    float s = 1;
    int i = 0, j = 2;

    for(i = 3; i <= 39; i++){
        s = s + ((i * 1.0) / (1.0 * j));
        i++;
        j = j * 2;
    }
    printf("%.2f\n", s);
    
    return 0;
}