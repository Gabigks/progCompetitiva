#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    deque<int> d;
    vector<int> v_r;

    while(cin >> n && n != 0){
        deque<int> d;
        vector<int> v_r;
        for(int i=1; i <= n; i++) d.push_back(i);
        while(d.size() > 1){
            int aux = *d.begin();
            d.pop_front();
            v_r.push_back(aux);
            int aux2 = *d.begin();
            d.pop_front();
            d.push_back(aux2);
        }
        cout << "Discarded cards: ";
        for(int i=0; i<v_r.size(); i++){
            if(i != v_r.size()-1) cout << v_r[i] << ", ";
            else cout << v_r[i];
        }
        cout << "\nRemaining card: " << *d.begin() << "\n";
    }


    return 0;
}