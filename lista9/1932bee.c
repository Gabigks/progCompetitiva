#include <bits/stdc++.h>
 
using namespace std;

int main() {
	int p, n, c;
	int stock[200005];

	cin >> n >> c;

	for (int i = 0; i < n; ++i) {
		cin >> p;
    stock[i] = p;
  }

  int result = 0;
  int profit = stock[0];
  int finalProfit = stock[0];

  for (int j = 1; j < n; ++j) {
    if ((profit > stock[j] && (profit - stock[j] >= c)) || stock[j] < finalProfit) {
      if (profit - finalProfit - c > 0) result += profit - finalProfit - c;
      
      profit = stock[j];
      finalProfit = stock[j];
    }

    if (stock[j] > profit) profit = stock[j];
  }

  if (profit - finalProfit - c > 0) result += profit - finalProfit - c;

	cout << result << "\n";

  return 0;
}