#include <iostream>

using namespace std;

int main(){
    
    int a, b, aux = 0;
    int count = 0;
    
    cin >> a >> b;
    if(a == b){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
        exit(1);
    }
    if(a == 23){
        aux = 23;
        a = 0;
    }
    
    while(a != b){
        count++;
        a++;
        if (a == b) {
            break;
        }
        if(a== 23){
            count++;
            a = 0;
        }
    }
    
    if(aux == 23){
        cout << "O JOGO DUROU "<< count + 1 << " HORA(S)" << endl;
    }else{
        cout << "O JOGO DUROU "<< count << " HORA(S)" << endl;
    }
    
    return 0;
}
