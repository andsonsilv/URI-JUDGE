#include <iostream>
#include <vector>
#include <stack>

using namespace std;
int fatorial(int value){
    int fat = 1;
    for (int i = value; i >= 1; i--) {
        fat = fat * i;
    }
    return fat;
}

int main(){

    int a;
    int value_total = 0;
    cin >> a;

    int j = 0;
    int count = 1;
    stack<int> haha;

    while (j != 1) {
        int res = fatorial(count);
        if (res <= a) {
            haha.push(count);
        }else{
           break;
        }
        count++;
    }
    int aux = 0, cont = 0;
    while (!haha.empty()) {
        value_total = fatorial(haha.top());

        while (value_total != a) {
            if((aux + value_total) <= a){
                aux = aux + value_total;
                cont++;

            }else{
                break;
            }
        }
        haha.pop();

    }

    cout << cont << endl;

    return 0;
}

