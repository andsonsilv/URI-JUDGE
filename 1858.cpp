#include <iostream>
 
using namespace std;
 
int main() {
 
   int n;
   cin >> n;
   int vetor[n];
   for(int i = 0; i < n; i++){
        cin >> vetor[i];
   }
   int menor = vetor[0];
   int k = 1;
   for(int i = 1; i < n; i++){
       if(vetor[i] < menor){
           menor = vetor[i];
           k = i + 1;
       }
   }
   cout << k << endl;
 
   return 0;
}