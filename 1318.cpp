#include <iostream>
#include <vector>
using namespace std;

int N;

void intercala(int vetor[], int inicio, int meio, int fim){
    int aux[N];
    for(int i = inicio; i <= meio; i++)
        aux[i] = vetor[i];
    for(int j = meio + 1; j <= fim; j++)
        aux[fim+meio+1-j] = vetor[j];
    int i = inicio;
    int j = fim;
    for(int k = inicio; k <= fim; k++){
        if(aux[i] <= aux[j]){
            vetor[k] = aux[i];
            i++;
        }else{
            vetor[k] = aux[j];
            j--;
        }
    }
}

void mergesort(int vetor[], int inicio, int fim){
    if(inicio < fim){
        int meio = (inicio + fim) / 2;
        mergesort(vetor, inicio, meio);
        mergesort(vetor, meio + 1, fim);
        intercala(vetor, inicio, meio, fim);
    }
}

int main(){
    int a = 1, b = 1;
    while(a != 0 && b != 0){
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        N = b;
        int vetor[b];
        for (int i = 0; i < b; i++) {
            cin >> vetor[i];
        }

        mergesort(vetor, 0, b - 1);

        int elemrep = vetor[0];
        int qtd = 0, qtdtotal = 0;
        for (int i = 1; i < b; i++) {
            if(elemrep == vetor[i])
                qtd++;
            else{
                if(qtd > 0){
                    qtdtotal++;
                    qtd = 0;
                }
                elemrep = vetor[i];
            }
        }

        if(qtd > 0){
            qtdtotal++;
            qtd = 0;
        }

        cout << qtdtotal << endl;
    }
    return 0;
}

