#include<stdio.h>
#include<stack>

using namespace std;
int main(){
    
    char X[1001];
    
    while ( scanf ("%s", X) >= 0) {
        stack<char> P;
        bool correto = true;
        for (int i = 0;X[i]!='\0'; ++i) {
            if (X[i] == '(') {
                P.push('(');
            } else if (X[i] == ')'){
                if (P.empty()) {
                    correto = false;
                } else {
                    P.pop();
                }
            }
            
        }
        
        if (P.empty() && correto) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
        
        
    }
    
    return 0;
}
