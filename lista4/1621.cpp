#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    int cont = 0;
    cin >> n;
    long long array[n];
    for(long long i = 0; i < n; i++){
        long long num;
        cin >> num;
        array[i] = num;
    }
    sort(array, array+n);

    for(long long i = 0; i < n; i++){
        if(array[i] != array[i+1]) cont++;
    }
    cout << cont << endl;
    return 0;
}