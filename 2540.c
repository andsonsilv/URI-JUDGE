#include <stdio.h>

int main(){
	
	int n, i;
	int cont = 0;
	while(scanf("%d ", &n) != EOF){
	    int vetor[n];
		for(i = 0; i < n; i++){
			scanf("%d", &vetor[i]);
			if(vetor[i] == 1)
				cont++;
		}
		if(cont >= (n * 1.0 * ((1.0 * 2)/(1.0 * 3)))){
		    printf("impeachment\n");
	    }else{
		    printf("acusacao arquivada\n");
	    }
	    cont = 0;
	}
	return 0;
}