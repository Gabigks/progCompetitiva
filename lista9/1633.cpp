#include <bits/stdc++.h>
using namespace std;
const int X = 1e6 + 6, MOD = 1e9 + 7;

int f[X];

int main() {
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  int n;
  const int c[7] = {0, 1, 2, 3, 4, 5, 6};
  
  cin >> n;

  f[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 6; j++) {
      if (i >= c[j]) {
        f[i] += f[i - c[j]];
        f[i] %= MOD;
      }
    }
  }
  cout << f[n] << "\n";
  return 0;
}