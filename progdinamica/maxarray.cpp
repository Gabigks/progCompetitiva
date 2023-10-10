#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n, x;

  cin >> n;
  
  long long numbers[n], memo[n];

  for(long long i=0; i<n; i++){
    cin >> x;
    numbers[i]=x;
  }
  long long max = numbers[0];
  memo[0] = numbers[0];

  for(long long i=1; i<n; i++){
    if(memo[i-1] + numbers[i] > numbers[i]){
      memo[i] = numbers[i] + memo[i-1];
      }
    else
      memo[i] = numbers[i];
    if(memo[i] > max) max = memo[i];
  }
  cout << max;

return 0;
}

