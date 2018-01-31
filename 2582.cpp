#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if((x + y) == 0){
            cout << "PROXYCITY\n";
        }else if((x + y) == 1){
            cout << "P.Y.N.G.\n";
        }else if((x + y) == 2){
            cout << "DNSUEY!\n";
        }else if((x + y) == 3){
            cout << "SERVERS\n";
        }else if((x + y) == 4){
            cout << "HOST!\n";
        }else if((x + y) == 5){
            cout << "CRIPTONIZE\n";
        }else if((x + y) == 6){
            cout << "OFFLINE DAY\n";
        }else if((x + y) == 7){
            cout << "SALT\n";
        }else if((x + y) == 8){
            cout << "ANSWER!\n";
        }else if((x + y) == 9){
            cout << "RAR?\n";
        }else if((x + y) == 10){
            cout << "WIFI ANTENNAS\n";
        }
    }
    return 0;
}