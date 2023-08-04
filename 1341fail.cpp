/* A Naive recursive implementation of LCS problem */
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
  
int max(int a, int b);
  
int lcs(string X, string Y, int m, int n ){  
    int L[m + 1][n + 1];  
    int i, j;  
      
    for (i = 0; i <= m; i++){  
        for (j = 0; j <= n; j++){  
            if (i == 0 || j == 0)  
                L[i][j] = 0;  
            else if (X[i - 1] == Y[j - 1])  
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
    return L[m][n];  
}  

int max(int a, int b){  
    return (a > b)? a : b;  
}  

int main(){

  int t, h, w, n1, n2, x, y, cont = 1;

  cin >> t;

  while(cont <= t){
    cin >> h >> w;
    char grades[h][w];

    string text, direction, path1, path2;
    for(int i=0; i<h; i++) {
      cin >> text;
      for(int j=0; j<w; j++){
        grades[i][j] = text[j];
      }
    }

    cin >> n1 >> x >> y;
    x--;
    y--;
    cin >> direction;
    path1[0] = grades[x][y];
    for(int i=1; i<=n1; i++){
      if(direction[i] == 'N') x--;
      if(direction[i] == 'S') x++;
      if(direction[i] == 'E') y++;
      if(direction[i] == 'w') y--;
      path1[i] = grades[x][y];
      cout << path1[i];
    }
    cout << endl;
    cin >> n2 >> x >> y;
    x--;
    y--;
    cin >> direction;
    path2[0] = grades[x][y];
    for(int i=0; i<=n2; i++){
      if(direction[i] == 'N') x--;
      if(direction[i] == 'S') x++;
      if(direction[i] == 'E') y++;
      if(direction[i] == 'w') y--;
      path2[i] = grades[x][y];
    }

    int minLcs = lcs(path1, path2, n1, n2);

    printf("Case %d: %d %d\n", cont, n1-minLcs, n2-minLcs);

    cont++;

  }

  return 0;
}