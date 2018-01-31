#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, c;
    while(1){
        cin >> a;
        if(a == 0)
            break;
        cin >> b >> c;
        int res = floor((a * b * c)/(c - a));
        if(res == 1)
            cout << res << " pagina\n";
        else
            cout << res << " paginas\n";
    }
    return 0;
}