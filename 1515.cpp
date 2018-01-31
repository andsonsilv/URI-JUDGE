#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string essa, menor;
    int casos, a, b, c, d;
    while(1){
        cin >> casos;
        if(casos == 0)
            break;
        cin >> essa >> c >> d;
        menor = essa;
        for(int i = 1; i < casos; ++i){
            cin >> essa >> a >> b;
            if((a - b) < (c - d)){
                c = a;
                d = b;
                menor = essa;
            }
        }
        cout << menor << endl;
    }

    return 0;
}
