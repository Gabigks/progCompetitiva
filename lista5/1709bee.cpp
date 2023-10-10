#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
	
  int p;
  
  cin >> p;
  
  int pos = 2;
	int ans = 1;
	while (pos != 1){
		if (pos <= p / 2) pos += pos;
		else pos -= (p - pos + 1);
		++ans;
	}
	cout << ans << '\n';

	return 0;
}	