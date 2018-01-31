#include <iostream>

using namespace std;

int main(){


    int casos, count = 0, aux = 0;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        int a;
        cin >> a;
        int vetor[a];
        for (int j = 0; j < a; j++) {
            cin >> vetor[j];
        }

        int tam = a;
        for(int i = 0; i < tam - 1; i++){
            int indice = i;
            for(int j = i + 1; j < tam; j++){
                if(vetor[j] < vetor[indice]){
                    indice = j;
                    aux++;
                    if(aux == 1){
                        count++;
                    }
                }
            }
            swap(vetor[indice], vetor[i]);

            aux = 0;

        }

        cout << count<< endl;
        count = 0;
    }
    return 0;
}
