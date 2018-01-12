#include <stdio.h>

int main(void){

    int j, z = 0, ii = 0;
    scanf("%d", &j);
    if (j < 10000) {

    int v[j];
    int i;
    for (i = 0; i < j; i++) {
        scanf("%d", &v[i]);

        if (v[i] >= 10 && v[i] <= 20) {
            z++;
        } else{
            ii++;
        }
    }
    printf("%d in\n", z);
    printf("%d out\n", ii);

    }
    return 0;
}