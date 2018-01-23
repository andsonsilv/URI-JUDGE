#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int count = 0;
    float media, nota = 0;
    while(count < 2){
        cin >> nota;
        if(nota >= 0 && nota <= 10){
            media = media + nota;
            count++;
        }else{
            cout << "nota invalida" << endl;
        }
    }
    media = media / 2;
    cout << "media = ";
    cout << setiosflags (ios::fixed) << setprecision(2) << media << endl;
    return 0;
}
