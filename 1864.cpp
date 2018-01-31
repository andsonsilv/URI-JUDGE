#include <iostream>
#include <stdio.h> 
#include <string>

using namespace std;

int main(void){

	char a[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		for(int i = 0; i < n; i++){
			cout << a[i];
		}
		cout << endl;
	}	
	return 0;
}
  