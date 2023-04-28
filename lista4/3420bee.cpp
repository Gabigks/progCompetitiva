#include <bits/stdc++.h>
#include <math.h>

using namespace std;

long long max_cards(long long x) {
  return (((3*x)*(3*x)) + x)/2;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;

  cin >> t;
  long long n;
  
  for (long long i = 0; i < t; i++) {
    cin >> n;
    long long h = max_cards(n);

    cout << h << endl;
  }

  return 0;
}