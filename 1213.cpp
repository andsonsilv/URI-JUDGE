#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
    int n;
    while(scanf("%d", &n) != EOF){
        int count = 2;

        if(n == 1){
            cout << 1 << endl;
        }else{
            long long int h = 11;
            while((h % n) != 0){
                h = ((h * (10 % n)) + (1 % n)) % n;
                count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}