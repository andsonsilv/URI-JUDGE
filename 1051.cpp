#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float aux;
    cin >> aux;
    if(aux <= 2000){
        cout << "Isento" << endl;
    }else if(aux <= 3000){
        aux -= 2000;
        aux = aux * 0.08;
        printf("R$ %.2f\n", aux);
    }else if(aux <= 4500){
        aux -= 3000;
        aux = aux * 0.18;
        aux += 80;
        printf("R$ %.2f\n", aux);
    }else{
        aux -= 4500;
        aux = aux * 0.28;
        aux += 350;
        printf("R$ %.2f\n", aux);
    }
    
    return 0;
}

