#include <iostream>
#include <list>

using namespace std;

int main(){

    char vetor[51];
    list<char> haha;

    cin >> vetor;
    for(int i = 0; vetor[i] != '\0'; i++){
        if(vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u'){
            haha.push_back(vetor[i]);
        }
    }

    int tam = haha.size();
    int aux = 0;
    if(tam % 2 == 0){
        while (!haha.empty()) {
            if(haha.front() != haha.back()){
                aux = 1;
                break;
            }
            haha.pop_back();
            haha.pop_front();
        }
    }else{
        while (tam != 1) {
            if(haha.front() != haha.back()){
                aux = 1;
                break;
            }
            haha.pop_back();
            haha.pop_front();
            tam = tam - 2;
        }
    }
    if(aux == 0){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}
