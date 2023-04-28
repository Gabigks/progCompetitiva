#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt, opt, ans;
    set<string>sy;
    set<string>sn;
    int a=0;
    while(cin >> txt && txt != "FIM"){
        cin  >> opt;
        if(opt == "YES") sy.insert(txt);
        else sn.insert(txt);

        if(a==0 && opt== "YES"){
            a = txt.size();
            ans = txt;  
        } 
        else if(a < txt.size() && opt == "YES"){
            a = txt.size();
            ans = txt;
        }
    }
    for(auto x : sy) cout << x << "\n";
    for(auto x : sn) cout << x << "\n";

    cout << "\nAmigo do Habay:\n" << ans << "\n";
    
    return 0;
}