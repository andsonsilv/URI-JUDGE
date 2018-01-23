#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int x = 0;
    int a = 0, g = 0, d = 0;
    while(x != 4){
        cin >> x;
        if(x == 1) a++;
        else if(x == 2) g++;
        else if(x == 3) d++;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
    return 0;
}
