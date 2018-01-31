#include <iostream>

using namespace std;

int main(){
    int casos;
    int count = 0;
    int cont = 0;
    int aux;
    while(1){
        cin >> casos;
        if(casos == 0)
            break;
        for(int i = 0; i < casos; i++){
            cin >> aux;
            if(aux == 1){
                count++;
            }else{
                cont++;
            }
        }
        cout << "Mary won " << cont << " times and John won " << count << " times" << endl;
        cont = 0;
        count = 0;
    }
    return 0;
}
