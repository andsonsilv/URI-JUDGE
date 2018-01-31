#include <iostream>
#include <stdlib.h>

using namespace std;

struct basquete{
	int inscricao;
	int p_marcados;
	int p_sofridos;
	int pontos;
	double media;
};

int N;

void intercala(basquete vetor[], int p, int q, int r){
    basquete aux[N];
    for(int i = p; i <= q; i++)
        aux[i] = vetor[i];
    for(int j = q+1; j <= r; j++)
        aux[r+q+1-j] = vetor[j];
    int i = p;
    int j = r;
    for(int k = p; k <= r; k++){
        if(aux[i].pontos > aux[j].pontos){
            vetor[k] = aux[i];
            i++;
        }else if(aux[i].pontos < aux[j].pontos){
        	vetor[k] = aux[j];
            j--;
        }else{
     		if(aux[i].media > aux[j].media){
	            vetor[k] = aux[i];
	            i++;
	        }else if(aux[i].media < aux[j].media){
	        	vetor[k] = aux[j];
	            j--;
	        }else{
	      		if(aux[i].p_marcados > aux[j].p_marcados){
		            vetor[k] = aux[i];
		            i++;
		        }else if(aux[i].p_marcados < aux[j].p_marcados){
		        	vetor[k] = aux[j];
		            j--;
		        }else{
		      		if(aux[i].inscricao > aux[j].inscricao){
			            vetor[k] = aux[i];
			            i++;
			        }else{
			        	vetor[k] = aux[j];
			            j--;
			        }
		        }
	        } 		
        }
    }

}

void mergeSort(basquete vetor[], int p, int r){
    if(p < r){
        int q = (p+r)/2;
        mergeSort(vetor, p, q);
        mergeSort(vetor, q+1, r);
        intercala(vetor, p, q, r);
    }
}

int main(){
	int n, max, insc1, insc2, marcados1, marcados2, count = 1;
	cin >> n;
	while(n != 0){
		if(count > 1){
			cout << endl;
		}
		basquete vetor[n];
		max = (n * (n - 1)) / 2;
		for(int i = 0; i < n; i++){
			vetor[i].inscricao = i + 1;
			vetor[i].p_marcados = 0;
			vetor[i].p_sofridos = 0;
			vetor[i].pontos = 0;
		}
		for(int i = 0; i < max; i++){
			cin >> insc1 >> marcados1 >> insc2 >> marcados2;
			vetor[insc1-1].p_marcados += marcados1;
			vetor[insc1-1].p_sofridos += marcados2;
			vetor[insc2-1].p_marcados += marcados2;
			vetor[insc2-1].p_sofridos += marcados1;
			if(marcados1 > marcados2){
				vetor[insc1-1].pontos += 2;
				vetor[insc2-1].pontos += 1;
			}else{
				vetor[insc2-1].pontos += 2;
				vetor[insc1-1].pontos += 1;
			}
		}
		for(int i = 0; i < n; i++){
			if(vetor[i].p_sofridos == 0){
				vetor[i].media = vetor[i].p_marcados;
			}else{
				vetor[i].media = ((vetor[i].p_marcados) * 1.0) / ((vetor[i].p_sofridos) * 1.0);	
			}
		}
		N = n;
		mergeSort(vetor, 0, n-1);
		cout << "Instancia " << count << endl;
		for(int i = 0; i < n-1; i++){
			cout << vetor[i].inscricao << " ";
		}
		cout << vetor[n-1].inscricao << endl;		
		count++;
		cin >> n;
	}
	return 0;
}