#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int k;

    while(scanf("%d", &k) != EOF){

        int vetor[k];
        int haha[k];

        for (int i = 0; i < k; i++) {
            cin >> vetor[i];
        }
        for (int j = 0; j < k; j++) {
            cin >> haha[j];
        }
        int aux, auxmesmo, e = 0, count = 0, ajudadeus = 0;
        for (int f = 0; f < k; f++) {
            for (int n = e; n < k; n++) {
                if (vetor[n] == haha[ajudadeus]) {
                    aux = n;
                    break;
                }
            }

            for (int d = aux; d > e; d--) {
                auxmesmo = vetor[d];
                vetor[d] = vetor[d-1];
                vetor[d-1] = auxmesmo;
                count++;
            }
            e++;
            ajudadeus++;

        }
        cout << count;

        cout << endl;
    }
    return 0;
}