#include <iostream>
 
using namespace std;
 
int main() {

    int n, a;
    int soma = 0, soma2=0;

    cin >> n;

    for(int i =1; i<n; i++){
        cin >> a;
        soma2 += i;
        soma += a;
    }
    soma2 += n;
    cout << soma2 - soma << "\n";
}
/*\n*/