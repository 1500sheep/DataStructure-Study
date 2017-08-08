#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting {
	int from,to;
};

bool cmp(const Meeting &m1, const Meeting &m2) {
	if (m1.to == m2.to) {
		return m1.from < m2.from;
	}
	else {
		return m1.to < m2.to;
	}
}
int main()
{
	int n;
	cin >> n ;
	vector<Meeting> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i].from >> a[i].to;
	}
	sort(a.begin(), a.end(), cmp);
	int now = 0;
	int ans = 0;
	for (int i = 0; i < a.size(); i++) {
		if (now <= a[i].from) {
			now = a[i].to;
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}