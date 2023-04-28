#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n, x, w;
  int contPair = 0, contSolo = 0;
  vector<long long> v;
  vector<long long> flag;

  cin >> n >> x;
    
  for(int i=0; i<n; i++){
    cin >> w;
    v.push_back(w);
  }
  sort(v.begin(), v.end());

  int i = 0, j = n-1;
  while(i < j){
    if(v[i] + v[j] > x){
      j--;
    } else {
      contPair++;
      flag.push_back(i);
      flag.push_back(j);  
      i++;
      j--;
    }
  }
  contSolo = v.size() - flag.size();
  cout << contPair + contSolo << endl;

  return 0;
}

