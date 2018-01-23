#include <stdio.h>

int main(void){
	int i;
    int s = 7, se = 6, cin = 5;
    for (i = 1; i <= 9; i++) {
        printf("I=%d J=%d\n", i, s);
        printf("I=%d J=%d\n", i, se);
        printf("I=%d J=%d\n", i, cin);
        i = i + 1;
    }
    return 0;
}