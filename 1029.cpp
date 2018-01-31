#include <iostream>
#include <stdio.h>

using namespace std;

int global = 0;

int fibonacci(int numero){
	global++;
	if(numero == 0 || numero == 1){
		return numero;
	}
	else
		return (fibonacci(numero-1) + fibonacci(numero-2));
}


int main(){
	int n, fib, k = 1;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> fib;
		int resultado = fibonacci(fib);
		cout << "fib(" << fib << ") = " << global-1 << " calls = " << resultado << endl;
		global = 0;
	}
	return 0;
}