#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int duration;
	int value;
	double score;
} data;

bool compare(data a, data b) { return a.score > b.score; }

int main() {
	int n, t, cont = 1;
	while (true) {
		cin >> n >> t;
		if(n==0 && t==0) break;

		data arr[n];

		for (int i = 0; i < n; i++) {
			scanf("%d %d", &arr[i].duration, &arr[i].value);
			arr[i].score = (double)arr[i].value / (double)arr[i].duration;
		}
		sort(arr, arr+n, compare);

		int maxValue = -1;
		for (int i = 0; i < n; i++) {
			int j = i;
			int scoreNow = 0;
			int timelimit = t;
			while (timelimit > 0 && j < n) {
				if (timelimit >= arr[j].duration) {
					int x = timelimit / arr[j].duration;
					scoreNow += arr[j].value * x;
					timelimit -= (arr[j].duration * x);
				}
				j++;
			}
			if (scoreNow > maxValue) maxValue = scoreNow;
		}
		cout << "Instancia " << cont << "\n";
		cout << maxValue << "\n\n";
		cont++;
	}

	return 0;
}