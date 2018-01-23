#include <stdio.h>
#include <math.h>

int main(void){
    
    int j, z = 0, m = 0, i = 1;
    scanf("%d", &j);
    if (j < 1000) {
        for(i = i; i <= j; i++){
            z = pow(i, 2);
            m = pow(i, 3);
            printf("%d %d %d\n", i, z, m);
        }
    }
    
    return 0;
}