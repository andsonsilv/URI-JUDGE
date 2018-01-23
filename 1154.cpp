#include <iostream> 
#include <stdio.h>
#include <string>

using namespace std;

int main(void){
	
	int a = 0;
	float soma = 0;
	int count = 0;
	cin >> a;
	while(a >= 0){
		count++;
		soma += a;
		cin >> a; 
	}

	float media = (soma * 1.0) / (count * 1.0);
	printf("%.2f\n", media); 

	return 0;
}