#include <iostream>
using namespace std;
long long d[101][101][101];
long long mod = 1000000007LL;
int main() {
	int n, l, r;
	cin >> n >> l >> r;
	d[1][1][1] = 1LL;
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= l; j++) {
			for (int k = 1; k <= r; k++) {
				if (j + 1 <= l) {
					d[i + 1][j + 1][k] += d[i][j][k];
					d[i + 1][j + 1][k] %= mod;
				}
				if (k + 1 <= r) {
					d[i + 1][j][k + 1] += d[i][j][k];
					d[i + 1][j][k + 1] %= mod;
				}
				d[i + 1][j][k] += d[i][j][k] * (i - 1);
				d[i + 1][j][k] %= mod;
			}
		}
	}
	cout << d[n][l][r] << '\n';
	return 0;
}