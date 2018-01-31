#include <iostream>

using namespace std;

int main(void){
	int a = 0;
	cin >> a;
	if(a == 0){
		cout << "E" << endl;
	}else if(a > 0 && a <= 35){
		cout << "D" << endl;
	}else if(a > 35 && a <= 60){
		cout << "C" << endl;
	}else if(a > 60 && a <= 85){
		cout << "B" << endl;
	}else if(a > 85 && a <= 100){
		cout << "A" << endl;
	}
	return 0;
}