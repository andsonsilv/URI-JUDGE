#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float vetor[100];
    int i;
    for (i = 0; i < 100; ++i) {
        cin >> vetor[i];
    }
    for (i = 0; i < 100; i++) {
        if (vetor[i] <= 10) {

            cout << "A[" << i << "] = ";
            cout << setiosflags (ios::fixed) << setprecision(1) << vetor[i] << endl;


        }
    }

    return 0;
}
