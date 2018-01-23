#include <iostream>

using namespace std;

int main(){
    int a = 1;
    int count = 0, i, soma = 0;
    while (a != 0) {
        cin >> a;
        if(a == 0){
           break;
        }
        for (i = a; count != 5; i++) {
            if (i % 2 == 0) {
                soma += i;
                count++;
            }
        }
        cout << soma;
        soma = 0;
        count = 0;
        cout << endl;
    }
    return 0;
}
