#include<iostream> 

using namespace std;

int main(){
	
	int a = 0, n = 0;
	int result = 0;
	cin >> a >> n;
	while(n <= 0){
		cin >> n;
	}	
	while(n > 0){
		result += a; ;
		a++;
		n--;
	}
	cout << result << endl;

	return 0;
}