#include <iostream>

using namespace std;

int main(){
	int r, n, count = 1, total = 0;
	cin >> r >> n;
	while(r != 0 && n != 0){
		total = n;
		if(n >= r){
			cout << "Case " << count << ": 0" << endl;
			count++;
		}else{
			for(int i = 1; i <= 26; i++){
				total += n;
				if(total >= r){
					cout << "Case " << count << ": " << i << endl;
					count++;
					break;
				}
			}
			if(total < r){
				cout << "Case " << count << ": impossible" << endl;
				count++;
			}
		}  
		cin >> r >> n;
	}
	return 0;
}