#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int g[], int s[], int b[], string c[], int n){
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n-i-1; j++){
      if(g[j+1] > g[j]) {
        swap(g[j], g[j+1]);
        swap(s[j], s[j+1]);
        swap(b[j], b[j+1]);
        swap(c[j], c[j+1]);
      }
      if(g[j+1] == g[j]) {
        if(s[j+1] > s[j]) {
          swap(g[j], g[j+1]);
          swap(s[j], s[j+1]);
          swap(b[j], b[j+1]);
          swap(c[j], c[j+1]);
        }
        if(s[j+1] == s[j]) {
          if(b[j+1] > b[j]) {
            swap(g[j], g[j+1]);
            swap(s[j], s[j+1]);
            swap(b[j], b[j+1]);
            swap(c[j], c[j+1]);
          }
          if(b[j] == b[j+1]) {
            if(c[j+1] < c[j]) {
              swap(g[j], g[j+1]);
              swap(s[j], s[j+1]);
              swap(b[j], b[j+1]);
              swap(c[j], c[j+1]);
            }
          }
        }
      }
    }
  }  
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  int gold[n], silver[n], bronze[n];
  string countrys[n];

  for(int i = 0 ; i < n; i++) cin >> countrys[i] >> gold[i] >> silver[i] >> bronze[i];

  bubble_sort(gold, silver, bronze, countrys, n);

  for(int i = 0; i < n; i++) cout << countrys[i] << " " << gold[i] << " " << silver[i] << " " << bronze[i] << '\n';

  return 0;
}
