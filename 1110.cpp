#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){

    int n = 0;
    list<int> haha;
    list<int> aux;
    cin >> n;
    while(n != 0){
        for(int i = n; i > 0; i--){
            haha.push_back(i);
        }
        while(haha.size() != 1){
            aux.push_back(haha.back());
            haha.pop_back();
            haha.push_front(haha.back());
            haha.pop_back();
        }
        cout <<  "Discarded cards: ";
        for(auto i = aux.begin(); i != aux.end(); i++){
            if(*i == aux.back()){
                break;
            }
            cout << *i << ", ";
        }
        cout << aux.back() << endl;
        cout << "Remaining card: " << haha.back() << endl;

        haha.pop_back();
        while(!aux.empty()){
            aux.pop_back();
        }
        cin >> n;

    }
    
    return 0;
}
