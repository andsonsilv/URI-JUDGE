#include <iostream> 
#include <list>
#include <ctime>

using namespace std;

bool primo(int number){
	int count = 0;
	for(int i = 2; i < number; i++){
		if(number % i == 0)
			count = 1;
	}
	if(count == 0) return true;

	return false;
}

int main(){
	
	int n, k;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> k;
		if(primo(k)){
			cout << k << " eh primo" << endl;
		}else{
			cout << k << " nao eh primo" << endl;
		}
	}

	return 0;
}