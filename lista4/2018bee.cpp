#include <bits/stdc++.h>
#include <tuple>

using namespace std;

bool comp(pair<string, tuple<int, int, int>>& a, pair<string, tuple<int, int, int>>& b){
    if (get<0>(a.second) != get<0>(b.second)) return get<0>(a.second) > get<0>(b.second);
    if (get<1>(a.second) != get<1>(b.second)) return get<1>(a.second) > get<1>(b.second);
    if (get<2>(a.second) != get<2>(b.second)) return get<2>(a.second) > get<2>(b.second);
    return a.first > b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string modal, country;  
    map<string, tuple<int, int, int>> m;

    while(getline(cin, modal)){
        for(int i = 0; i < 3; i++){
            cin >> country;
            if(i == 0){
                get<0>(m[country])++;
            } else if(i == 1){
                get<1>(m[country])++;
            } else{
                get<2>(m[country])++;
            }       
        }
    }

    sort(m.begin(), m.end(), comp);
    for(auto x : m){
        cout << x.first << " " << get<0>(x.second) << " " << get<1>(x.second) << " " << get<2>(x.second) << endl;
    }

    return 0;
}