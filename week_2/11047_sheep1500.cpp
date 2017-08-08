#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		ans += k / a[i];
		k %= a[i];
	}
	cout << ans << '\n';
	return 0;
}