#include <iostream>

using namespace std;

int main(){

    int vetor[20];
    int i, y = 19, aux = 0;
    for (i = 0; i < 20; ++i) {
        cin >> vetor[i];
    }
    for (i = 0; i < 10; i++) {
        aux = vetor[i];
        vetor[i] = vetor[y];
        vetor[y] = aux;
        y--;
    }
    for (i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}
