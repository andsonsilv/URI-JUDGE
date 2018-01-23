#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int a, b, c = 1, d = 0;
    cin >> a >> b;
    int vetor[a];
    while(c != b + 1){
    for(int i = 0; i < a; i++){
        if(c == b + 1){
            d = i;
            break;
        }
        vetor[i] = c;
        c++;
        d = i;
    }
    for(int j = 0; j < a; j++){
        if(j == (d + 1)){
            break;
        }
        if(vetor[j] == b || (j == a - 1)){
            cout << vetor[j];
            break;
        }
        cout << vetor[j] << " ";
    }
    cout << endl;
    }
    return 0;
}
