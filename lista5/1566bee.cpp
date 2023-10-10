#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int nc, h, n;
    
  cin >> nc;

  for(int i = 0; i < nc; i++){
    int b = 0;
    cin >> n;
    vector<int> vec(231, 0);
    for(int j = 0; j < n; j++){
      cin >> h;
      if(h > b) b = h;
      vec[h]++;
    }
    for(int k = 20; k <= 230; k++){
      if(vec[k] > 0 && k == b){
        if(vec[k] > 1){
          for (int l = 1; l <= vec[k]; l++){
            if(l == vec[k]) cout << k;
              else cout << k << ' ';
            }
          }
        else cout << k;
      }
      else if (vec[k] == 1) {
        cout << k << ' ';
      }
      else if(vec[k] > 1){
        for (int l = 1; l <= vec[k]; l++){
          cout << k << ' ';
        }
      }
      else if(vec[k] == 0){
        continue;
      }
    }
    cout << '\n';
  }
  cout << '\n';
  return 0;
}

