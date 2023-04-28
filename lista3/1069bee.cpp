#include <bits/stdc++>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r=0;
    string txt;

    cin >> n;

    while (r < n){
        cin >> txt;
        stack<char> s;
        
        int cont = 0;
        for(int i=0; i<txt.length(); i++){
            if(txt[i] == '<'){
               s.push('<');
            }
            else if(txt[i] == '>'){
                if(s.empty() == true){
                }else{
                    cont++;
                    s.pop();
                }
                
            }
        }
        while(!s.empty()) s.pop();
        cout << cont << "\n";
        r++;
    }
}