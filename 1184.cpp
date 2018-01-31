#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(void){
    char x;
    float matriz[12][12];
    cin >> x;
    int haha = 0;
    float media = 0, soma = 0;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> matriz[i][j];
        }
    }
    if(x == 'S'){
        for(int i = 1; i < 12; i++){
            for(int j = 0; j < i; j++){
                haha++;
                soma += matriz[i][j];

            }
        }
        printf("%0.1f\n",soma );
    }else if(x == 'M'){
        for(int i = 1; i < 12; i++){
            for(int j = 0; j < i; j++){
                haha++;
                soma += matriz[i][j];
            }
        }
        media = soma / (haha * 1.0);
        printf("%0.1f\n",media );
    }
    return 0;
}
