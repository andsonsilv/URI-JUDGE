#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a = 0, b = 0, k = 0, soma = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        for(int j = a; k != b; j++){
            if((j % 2 == 1) || (j % 2 == -1)){
                soma += j;
                k++;
            }

        }
        cout << soma << endl;
        k = 0;
        soma = 0;
    }
    return 0;
}
