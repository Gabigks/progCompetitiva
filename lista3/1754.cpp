#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    long long a, b;
    cin >> a >> b;

    if (a < b) swap(a, b);
    if (a > 2 * b) cout << "NO\n";
    else {
      a %= 3, b %= 3;
      if (a < b) swap(a, b);
      if ((a == 2 && b == 1) || (a == b && b == 0)) cout << "YES\n";
      else cout << "NO\n";
    }
  }

  return 0;
}