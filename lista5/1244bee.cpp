#include <bits/stdc++.h>

using namespace std;

bool compare_size(string i, string j){
	return (i.length() > j.length());
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

	int n;
	string ph, word, var;
	char delim = ' ';

	cin >> n;
  getline(cin, ph);

	for(int i = 0; i < n; i++){
		vector<string> vec;
		getline(cin, ph);
		stringstream ss(ph);
    if(!ph.empty()){
      while (getline(ss, word, delim)) { 
        vec.push_back(word); 
      }
    }
		stable_sort(vec.begin(), vec.end(), compare_size);
    if(!vec.empty()){
      var = vec.back();
      vec.pop_back();
    }
    for(auto x : vec) cout << x << ' ';
    cout << var << '\n';
	}

  return 0;
}