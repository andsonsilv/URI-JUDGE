#include <stdio.h>

int main(void){
    int k;
    scanf("%d", &k);
    int i;
    float a = 0, b = 0, c = 0;
    float media[k];
    for(i = 0; i < k; i++){
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        media[i] = ((a * 2) + (b * 3) + (c * 5)) / 10;
    }
    for(i = 0; i < k; i++){
        printf("%.1f\n", media[i]);
    }
    return 0;
}