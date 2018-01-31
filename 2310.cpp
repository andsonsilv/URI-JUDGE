#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int casos;
    float a, b, c;
    string nome;
    float resA = 0, resB = 0, resC = 0;
    float tenA = 0, tenB = 0, tenC = 0;

    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> nome;
        cin >> a >> b >> c;
        tenA += a;
        tenB += b;
        tenC += c;
        cin >> a >> b >> c;
        resA += a;
        resB += b;
        resC += c;
    }
    printf("Pontos de Saque: %.2f %%.\n", (resA/tenA)*100);
    printf("Pontos de Bloqueio: %.2f %%.\n", (resB/tenB)*100);
    printf("Pontos de Ataque: %.2f %%.\n", (resC/tenC)*100);

    return 0;
}
