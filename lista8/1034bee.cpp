#include <bits/stdc++.h>
 
using namespace std;

int compare(const void *a, const void *b){
  return (*(int*)a - *(int*)b);
}
 
int main() {
  int t, n, m, a, k;
  int v[26];
  int dp[1000002];

  cin >> t;

  for (int y = 0; y < t; y++) {
    cin >> n >> m;

    for (int j = 0; j < n; j++) {
      cin >> a;
      v[j] = a;
    }

    qsort(v, n, sizeof(int), compare);
  
    if (m % v[n-1] == 0) {
      cout << m / v[n-1] << "\n";
      continue;
    }

    memset(dp, 999999, sizeof(dp));
    dp[0] = 0;
    
    for (int i = 0; i < n; i++) {
      k = v[i];

      for (int j = k; j <= m; j++) {
        dp[j] = min(dp[j], dp[j - k] + 1);
      }
    }
    
    cout << dp[m] << "\n";
  }

  return 0;
}