#include <stdio.h>
#include <math.h>

int main(){
    int y;
    while (scanf("%d", &y) != EOF) {
        int log_2 = log2(y);
        printf("%d\n", log_2);
    }
    return 0;
}