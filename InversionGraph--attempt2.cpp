#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> p(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	int c = 1, ans = 1;

	while (c < n) {
		if (p[c] == c) {
			ans++;
			c++;
		}
		else {
			if (p[p[c]] < p[c]) {
				if (p[c] == n) break;
				ans++;
				c = p[c] + 1;
			}
			else {
				c = p[c];
			}
		}
	}

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}