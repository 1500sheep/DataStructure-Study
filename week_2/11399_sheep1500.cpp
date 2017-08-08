#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n ;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	int ans = 0;
	int now = 0;
	for (int i = 0; i < a.size(); i++) {
		now += a[i];
		ans += now;
	}
	cout << ans << endl;
	return 0;
}