#include<iostream>
#include <vector>
using namespace std;

vector<vector<int>> Matrix_multiple(vector<vector<int>> &a, vector<vector<int>>&b)
{
	int n = a.size();
	vector<vector<int>> c(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
			c[i][j] %= 1000;
		}
	}
	return c;
}


int main()
{
	int n;
	long long int b;
	cin >> n >> b;

	vector<vector<int>> ans(n, vector<int>(n));
	vector<vector<int>> a(n, vector<int>(n));

	for (int i = 0; i<n; i++) {
		for (int j = 0; j<n; j++) {
			cin >> a[i][j];
		}
		ans[i][i] = 1;
	}

	while (b > 0)
	{
		if (b % 2 == 1)
		{
			ans = Matrix_multiple(ans, a); // ÇÑ¹ø ´õ °öÇØÁÜ;
		}
		a = Matrix_multiple(a, a);
		b /= 2;

	}



	for (int i = 0; i<ans.size(); i++) {
		for (int j = 0; j<ans[i].size(); j++) {
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}