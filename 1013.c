#include <stdio.h>
#include <math.h>

int main(void){
    
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a > b && a > c){
        printf("%.0lf eh o maior\n", a);
    } else if (b > a && b > c){
        printf("%.0lf eh o maior\n", b);
    } else if (c > a && c > b){
        printf("%.0lf eh o maior\n", c);
    }

    return 0;
}