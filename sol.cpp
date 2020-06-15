#include <bits/stdc++.h>

using namespace std;

#define SQ(a) (a)*(a)
#define ll long long
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define vi vector<int>

bool close(int dx, int dy, int r) {
	return (dx * dx) + (dy * dy) <= r * r;
}
void decode() {
	int r, a, b, c, d, e, f;
	cin >> r >> a >> b >> c >> d >> e >> f;
	int n = 0;
	if(close(a - c, b - d, r)) ++n;
	if(close(a - e, b - f, r)) ++n;
	if(close(c - e, d - f, r)) ++n;
	if(n > 1) cout << "yes";
	else cout << "no";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
