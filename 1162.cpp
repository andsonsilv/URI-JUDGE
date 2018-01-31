#include <iostream>
#include <string.h>

using namespace std;

int main(){


    int casos, count = 0;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        int a;
        cin >> a;
        int vetor[a];
        for (int j = 0; j < a; j++) {
            cin >> vetor[j];
        }
        int tam = a;
        int tam2 = tam;
        for(int i = 0; i < tam2 - 1; i++){
            for(int j = 0; j < tam - 1; j++){
                if(vetor[j] > vetor[j+1]){
                    count++;
                    swap(vetor[j], vetor[j+1]);
                }
            }
            tam = tam - 1;
        }
        cout << "Optimal train swapping takes " <<  count << " swaps.\n";
        count = 0;
    }
    return 0;
}
