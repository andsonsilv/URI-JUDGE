#include <iostream> 
#include <stdio.h>
#include <string>

using namespace std;

int main(void){

	int c = 0;
	char x; 
	float matriz[12][12];
	cin >> c;
	cin >> x;
	float media = 0, soma = 0;

	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> matriz[i][j];
		}
	}
	if(x == 'S'){
		for(int i = 0; i < 12; i++){
			soma += matriz[i][c];
		}
		printf("%0.1f\n",soma );		
	}else if(x == 'M'){
		for(int i = 0; i < 12; i++){
			soma += matriz[i][c];
		}
		media = soma / (12 * 1.0);
		printf("%0.1f\n",media );
	}

	return 0;
}