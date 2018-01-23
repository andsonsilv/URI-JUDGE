#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int casos;
    cin >> casos;
    int a, b;
    float c;
    for(int i = 0; i < casos; i++){
        cin >> a >> b;
        if(b == 0){
            cout << "divisao impossivel" << endl;
        }else{
            c = (a * 1.0) / (b * 1.0);
            printf("%.1f\n", c);
        }
    }
    return 0;
}
