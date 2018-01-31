#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *A, const void *B){
	int a = *(int *)A, b = *(int *)B;
	if (a % 2 == 0 && b % 2 == 1) return -1;
	if (a % 2 == 0 && b % 2 == 0){
		return a - b;
	}
	if (a % 2 == 1 && b % 2 == 1){
		return b - a;
	}
	return 1;
}


int main(){
	
	int n;
	int vet[100001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}
	qsort(vet, n, sizeof(int), cmpfunc);
	for (int i = 0; i < n; i++){
		printf("%d\n", vet[i]);
	}
	
	return 0;
}

//MitoOlimpiohaha