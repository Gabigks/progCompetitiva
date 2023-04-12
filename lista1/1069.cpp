#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    string s;
    char a;
    int cont = 1, maior = 1;
    cin >> s;

    for(int i=1; i < s.length(); i++){
        a = s[i-1];
        if(a == s[i]){
            cont++;
            if(cont > maior){
                maior = cont;
            }
        }
        else{
            cont = 1;
        }
    }

    cout << maior << "\n";

    return 0;
}
/*\n*/