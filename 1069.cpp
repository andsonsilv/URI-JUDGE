#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main(){

	int casos = 0, count = 0;;

	cin >> casos;
	char caract[1001];
	stack<int> diamantes;

	while(casos--){
		scanf("%s", caract);
		for(int i = 0; caract[i] != '\0'; i++){
			if(caract[i] == '<'){
				diamantes.push(1);
			}else if(caract[i] == '>'){
				if(!diamantes.empty()){
					count++;
					diamantes.pop();
				}
			}
		}
		cout << count << endl;
		count = 0;
		while(!diamantes.empty()){
			diamantes.pop();
		}

	}

	return 0;
}