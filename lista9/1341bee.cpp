#include "bits/stdc++.h" 
using namespace std; 

int max(int a, int b);  

int lcs(string x, string y, int m, int n){  
    int lcs[m + 1][n + 1];  
    int i, j;  
      
    for (i = 0; i <= m; i++){  
        for (j = 0; j <= n; j++){  
            if (i == 0 || j == 0)  
                lcs[i][j] = 0;  
            else if (x[i - 1] == y[j - 1])  
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);  
        }  
    }  
    return lcs[m][n];  
}  

int max(int a, int b){  
    return (a > b)? a : b;  
}  

string makeText(vector<string> grade){
    int n, x, y, row, column;
    string passos, result = "";
    cin >> n >> x >> y;

    if(n != 0) cin >> passos;

    result += grade[x-1][y-1]; 

    row = x-1;
    column = y-1;
    for(int i = 0; i < n; i++){
        switch(passos[i]){
            case 'N':
                row--;
                result += grade[row][column];
                break; 
            case 'S':
                row++;
                result += grade[row][column];
                break; 
            case 'E':
                column++;
                result += grade[row][column];
                break; 
            case 'W':
                column--;
                result += grade[row][column];
                break; 
            default: 
                break;
        }
    }
    return result;
}

int main(){ 
    int t, h, w, i, mlsc, cases = 1;
    string text, cA, cB;

    cin >> t;
    while(t--){
        vector<string> grade;
        cin >> h >> w;
        for(i = 0; i < h; i++){
            cin >> text;
            grade.push_back(text);
        }

        cA = makeText(grade);
        cB = makeText(grade);
        mlsc = lcs(cA, cB, cA.size(), cB.size());

        printf("Case %d: %d %d\n", cases, cA.size() - mlsc, cB.size() - mlsc);

        cases++;
    }

    return 0; 
} 