#include <stdio.h>

int main(void){

    int valor;
    scanf("%d", &valor);

    int i, j = 1, j2 = 2, z = 0, y = 1, f = 2, u = 1;
    for(i = 1; i <= valor; ++i){
        printf("%d %d %d\n", i, j, y);
        printf("%d %d %d\n", i, j2 , f);
        z++;
        u++;
        j = j2 + 2 * z;
        j2 = j + 1;
        y = u * u * u;
        f = y + 1;
    }

    return 0;
}

