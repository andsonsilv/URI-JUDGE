#include <iostream> 
#include <string>

using namespace std;

void comparar(string a, string b, int k){
	if(a == b){
		cout << "Caso #" << k << ": De novo!" << endl; 
		return;
	}else if(((a == "tesoura") && (b == "papel")) || ((a == "papel") && (b == "pedra")) || 
		((a == "pedra") && (b == "lagarto")) || ((a == "lagarto") && (b == "Spock")) ||
		((a == "Spock") && (b == "tesoura")) || ((a == "tesoura") && (b == "lagarto")) ||
		((a == "lagarto") && (b == "papel")) || ((a == "papel") && (b == "Spock")) || 
		((a == "Spock") && (b == "pedra")) || ((a == "pedra") && (b == "tesoura"))){
		cout << "Caso #" << k << ": Bazinga!" << endl;
		return;
	}else{
		cout << "Caso #" << k << ": Raj trapaceou!" << endl;
	}

}
int main(void){

	int n;
	string a, b;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> b;
		comparar(a, b, i);
	}

	return 0;
}
    
    