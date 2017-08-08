#include <iostream>
#include <vector>

using namespace std;
int a[1000001];
int b[1000001];
int c[2000001];

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int i = 0, j = 0, k = 0;
	while (i < n&&j < m) {
		if (a[i] <= b[j]) c[k++] = a[i++];
		else c[k++] = b[j++];
	}
	while (i < n) c[k++] = a[i++];
	while (j < m) c[k++] = b[j++];
	for (int i = 0; i < n + m; i++) {
		cout << c[i];
	}
	cout << '\n';
	return 0;
}