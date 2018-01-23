#include <stdio.h>

int main(void){

    float s = 1;
    int i;
    for(i = 2; i <= 100; i++){
        s = s + (1/(i * 1.0));
    }
    printf("%.2f\n", s);
    
    return 0;
}