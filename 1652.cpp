#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){

    int lin = 0, col = 0, deus = 0;

    cin >> lin >> col;

    char triste[21];
    queue<string> fila;


    char vaidacerto[21];
    int count_antes = 0;
    char aux;
    char aux2;
    int naosei = 0;
    for(int i = 0; i < 2 * lin; i++){
        cin >> triste;
        fila.push(triste);
    }

    vector<string> haha;

    for(int seila = 0; seila < 2 * lin; seila++){
        haha.push_back(fila.front());
        fila.pop();
    }
    for(auto x : haha){
        fila.push(x);
    }

    for(int k = 0; k < col; k++){
        cin >> vaidacerto;
        while (!fila.empty()) {
            if(vaidacerto == fila.front()){
                fila.pop();
                cout << fila.front() << endl;
                naosei++;
                break;
            }
            fila.pop();
            fila.pop();
        }
        if(naosei == 1){
            while (!fila.empty()) {
                fila.pop();
            }
        }else{
            for(deus = 0; vaidacerto[deus] != '\0'; deus++){
                aux = vaidacerto[deus];
                count_antes++;
            }
            aux2 = vaidacerto[count_antes - 2];
            //cout << aux << " jj" << endl;
            //cout << aux2 << "hhha " << endl;
            if((aux2 != 'a') && (aux2 != 'e') && (aux2 != 'i') && (aux2 != 'o') && (aux2 != 'u') && (aux == 'y')){
                for(deus = 0; deus != count_antes - 1; deus++){
                    cout << vaidacerto[deus];
                }
                cout << "ies" << endl;
            }else if((aux == 'o') || (aux == 's') || (aux == 'x') || ((aux == 'h') && (aux2 == 'c')) || ((aux == 'h') && (aux2 == 's'))){
                for(deus = 0; vaidacerto[deus] != '\0'; deus++){
                    cout << vaidacerto[deus];
                }
                cout << "es" << endl;
            }else{
                cout << vaidacerto << "s" << endl;
            }
        }
        naosei = 0;
        count_antes = 0;
        for(auto x : haha){
            fila.push(x);
        }
    }

    return 0;
}
