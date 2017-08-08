#include <iostream>

using namespace std;


int main()
{
	int m, n, k;
	cin >> m >> n >> k;
	int ans = 0;
	while (m >= 2 && n >= 1 && m + n >= k + 3)
	{
		ans += 1;
		m -= 2;
		n -= 1;
	}
	cout << ans << endl;

	return 0;
}