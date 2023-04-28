#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<string, int> kill;
    map<string, int> dead;
    map<string, int> :: iterator it;
   
    string k, d;
    
    while (cin >> k >> d){
        kill[k]++;
        dead[d]++;
    }

    cout << "HALL OF MURDERERS\n";


    for (it = kill.begin(); it != kill.end(); ++it){
        int aux = dead[it->first];
       
        if (!aux) cout << it->first << ' ' << it->second << '\n';
    }

    return 0;
}
