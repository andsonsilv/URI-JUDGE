#include <iostream>
#include <math.h>
using namespace std;

struct Bilhar{
    double dist;
    int indice;
};

int main(){

    int casos;
    cin >> casos;
    for (int i = 0; i < casos; i++) {
        double x, y;
        int n;

        cin >> n;
        Bilhar vetor[n];
        cin >> x >> y;

        double xx, yy;

        for (int i = 0; i < n; i++) {
            cin >> xx >> yy;
            vetor[i].dist = sqrt((x - xx) * (x - xx) + (y -yy) * (y -yy));
            vetor[i].indice = i + 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if(vetor[j + 1].dist < vetor[j].dist){
                    Bilhar aux;
                    aux = vetor[j + 1];
                    vetor[j + 1] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }
        cout << vetor[0].indice << endl;

    }
    return 0;
}
