#include <iostream>
#include <list>
using namespace std;

int main(){

    int a, b;
    int resto, casos;
    list<int> haha;
    cin >> casos;
    for (int k = 0; k < casos; k++) {
        cin >> a >> b;

        resto = a % b;

        haha.push_back(a);
        haha.push_back(b);
        haha.push_back(resto);
        haha.pop_front();

        while (resto != 0) {

            a = haha.front();
            haha.pop_front();
            b = haha.front();
            resto = a % b;
            haha.push_back(resto);
        }

        cout << haha.front() << endl;

        while (!haha.empty()) {
            haha.pop_front();
        }
    }

    return 0;
}
