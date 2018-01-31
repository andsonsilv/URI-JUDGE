#include <iostream>
#include <stdio.h>

using namespace std;

long long int Fatorial(long long int number){
	if(number == 0) return 1;

	long long int result = 1;
	for(long long int i = number; i > 0; i--){
		result = result * i; 
	}
	return result;
}
int main(){

	long long int x;
	long long int y;

	while(scanf("%lld%lld", &x, &y) != EOF){
		cout << Fatorial(x) + Fatorial(y) << endl;	
	}
	
	return 0;
}