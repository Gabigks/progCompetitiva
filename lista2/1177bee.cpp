#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    deque<int> d;
    for (int i=0; i < n; i++){
        d.push_back(i);
    }
    for (int i=0; i<10; i++){
        int aux;
        aux = *d.begin();
        printf("N[%d] = %d\n", i, aux);
        d.pop_front();
        d.push_back(aux);
    }

    return 0;
}