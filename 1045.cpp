#include <iostream>

using namespace std;

int main(){

    float a, b, c, aux;

    cin >> a >> b >> c;

    float vetor[3];

    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (vetor[j] < vetor[j+1] ) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
    a = vetor[0];
    b = vetor[1];
    c = vetor[2];

    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
        exit(1);
    }
    if((a * a) == ((b * b) + (c * c))){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if((a * a) > ((b * b) + (c * c))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    if((a * a) < ((b * b) + (c * c))){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;

    if((a == b && a != c) || (a == c && a != b) || (c == b && c != a)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
