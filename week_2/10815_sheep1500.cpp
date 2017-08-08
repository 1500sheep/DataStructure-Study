#include <iostream>
#include <algorithm>
using namespace std;
int a[500000];
int n, m;
int binary(int num) {
	int left, right;
	left = 0;
	right = n - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (a[mid] == num) {
			return 1;
		}
		else if (a[mid] > num) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
		return 0;
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];
	sort(a, a + n);
	cin >> m;
	while (m--) {
		int num;
		cin >> num;
		cout << binary(num)<<" ";
	}
	cout << endl;

	return 0;
}

