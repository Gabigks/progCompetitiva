#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a; 
    
    cin >> a;

    if (a == 1) cout << 1;
    else if (a < 4) cout<<"NO SOLUTION\n";
    else {
        for (int i = 2; i <= a; i += 2)
            cout << i << ' ';
        for (int i = 1; i <= a; i += 2)
            cout << i << ' ';
    }
    
    return 0;
}