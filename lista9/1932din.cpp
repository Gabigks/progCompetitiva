// 1932

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int c;
    cin >> n >> c;

    vi cotacoes(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> cotacoes[i];
    }

    if (n == 1) {
        cout << "0\n";
    }
    else {
        vector<vi> memo_soma_vals_opers(2, vi(n + 1));
    
        memo_soma_vals_opers[0][n] = 0;
        memo_soma_vals_opers[1][n] = cotacoes[n];
    
        for (int i = (n - 1); i >= 2; i--) {
            memo_soma_vals_opers[0][i] = max(memo_soma_vals_opers[0][i + 1],
                ((-cotacoes[i] - c) + memo_soma_vals_opers[1][i + 1]));
    
            memo_soma_vals_opers[1][i] = max((memo_soma_vals_opers[1][i + 1]),
                (cotacoes[i] + memo_soma_vals_opers[0][i + 1]));
        }
    
        memo_soma_vals_opers[0][1] = max(memo_soma_vals_opers[0][2],
            ((-cotacoes[1] - c) + memo_soma_vals_opers[1][2]));
    
        cout << memo_soma_vals_opers[0][1] << "\n";
    }

    return 0;
}

