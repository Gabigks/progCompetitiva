#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long r, n;

    while(cin >> r && r != 0){
        multiset<long long> ms;
        for(long long i=0; i<r; i++) {
            cin >> n;
            ms.insert(n);
        }
        for(auto x : ms){
            long long c = ms.count(x);
            if(c%2 == 1) {
                cout << x << "\n";
                break;
            }
        }
    }

    return 0;
}