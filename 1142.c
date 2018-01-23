#include <stdio.h>

int main(void){
    
    int valorN, cont = 1, num = 1;
    int a = 1, b = 2, c = 3, d = 4;
    scanf("%d", &valorN);
    for (cont = 1;  cont <= valorN; cont++) {
        printf("%d %d %d PUM\n", a, b, c);
        a = a + 4;
        b = b + 4;
        c = c + 4;
        d = d + 4;
    }
    return 0;
}

