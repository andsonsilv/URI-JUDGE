#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    char vetor[15];
    int somar = 0, somindo = 0, somavolt = 0;
    while(scanf("%s", vetor) != EOF){
        for(int j = 0; j < 14; j++){
            if((j != 3) && (j != 7) && (j != 11)){
               somar += vetor[j] - 48;
            }
        }
        int x  = 1;
        for(int k = 0; k < 11; k++){
            if((k == 3) || (k == 7)){
                continue;
            }
            somindo += ((vetor[k] - 48) * (x));
            x++;
        }
        int c  = 9;
        for(int p = 0; p < 11; p++){
            if((p == 3) || (p == 7)){
                continue;
            }
            somavolt += ((vetor[p] - 48) * (c));
            c--;
        }
        int aux = somavolt % 11;
        if(aux == 10)
            aux = 0;
        int aux2 = somindo % 11;
        if(aux2 == 10)
            aux2 = 0;
        if((aux2 == (vetor[12]-48)) && aux == (vetor[13]-48)){
            cout << "CPF valido" << endl;
        }else{
            cout << "CPF invalido" << endl;
        }
        somar = 0, somavolt = 0, somindo = 0;
    }

    return 0;
}
