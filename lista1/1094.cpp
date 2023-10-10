#include <bits/stdc++.h>

using namespace std;

int main(){

    long long dif = 0;
    int a, prev = 0;

    cin >> a;

    for (int i = 1; i <= a; i++){
        int n;
        cin >> n;
        if(n < prev) dif += (prev - n);
        else prev = n;
    }

    cout << dif << endl;

    return 0;
}