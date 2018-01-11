#include <stdio.h>

int main(void){
    
    int v1, v2, v3;

    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);

    if (v1 > v2 && v1 > v3){
        if(v2 > v3){
            printf("%d\n%d\n%d\n\n", v3, v2, v1);
            printf("%d\n%d\n%d\n", v1, v2, v3);
        } else {
            printf("%d\n%d\n%d\n\n", v2, v3, v1);
            printf("%d\n%d\n%d\n", v1, v2, v3);
    }} else if (v2 > v1 && v2 > v3){
        if(v1 > v3){
            printf("%d\n%d\n%d\n\n", v3, v1, v2);
            printf("%d\n%d\n%d\n", v1, v2, v3);
        } else {
            printf("%d\n%d\n%d\n\n", v1, v3, v2);
            printf("%d\n%d\n%d\n", v1, v2, v3);
    }
    } else if (v3 > v1 && v3 > v2){
        if(v2 > v1){
            printf("%d\n%d\n%d\n\n", v1, v2, v3);
            printf("%d\n%d\n%d\n", v1, v2, v3);
        } else{
            printf("%d\n%d\n%d\n\n", v2, v1, v3);
            printf("%d\n%d\n%d\n", v1, v2, v3);
        }
    }

    return 0;
}

