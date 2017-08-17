#include<iostream>
using namespace std;
const int mod = 10007;
int C[1001][1001];
int main()
{
	int N, K;
	cin >> N >> K;
	for (int i = 0; i <= N; i++)
	{
		C[i][0] = C[i][i] = 1;
		for (int j = 1; j <= i - 1; j++)
		{
			C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
			C[i][j] %= mod;
		}
		}

	int ans = C[N][K];
	cout << ans << endl;
	return 0;
}