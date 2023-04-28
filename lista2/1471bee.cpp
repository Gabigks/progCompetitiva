#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, s;

    while(cin >> t >> s){
        vector<int> v(t+1);
        vector<int> aux;
        for(int i=0; i < s; i++){
                int a;
                cin >> a;
                v[a] = a;
        }
        if(t == s)  cout << "*\n";
        else{
            for(int i=1; i <= t; i++){
                if(v[i] == 0){
                    aux.push_back(i);
                }
            }
            for(auto x : aux){
                //vector<int>::size_type i = x;
                //if(i == (v.size())-1) cout << x << "\n";
                cout << x << " ";
            }
            cout << "\n";
        }
    }   
    return 0;
}

/* \n */