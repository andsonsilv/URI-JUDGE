#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){

    int casos = 0;
    string nome;
    float  valor = 0.0;
    int quant = 0;
    float result = 0;

    std::map<string,float> map;
    std::map<string,float>::iterator it;

    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> quant;
        for(int j = 0; j < quant; j++){
            cin >> nome >> valor;
            map.insert(pair<string,float>(nome, valor));
        }
        cin >> quant;

        for(int k = 0; k < quant; k++){
            cin >> nome >> valor;
            it = map.find(nome);
            result = result + (it->second * valor);
        }
        printf("R$ %.2f\n", result);
        map.clear();
        result = 0;
    }

    return 0;
}
