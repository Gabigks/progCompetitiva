#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long a;

    cin >> a;

    long long x = 1;

    for(int i = 0; i < a; i++){
        x = x * 2;
        x = x % 1000000007;
    }
    
    cout << x << endl;

    return 0;
}