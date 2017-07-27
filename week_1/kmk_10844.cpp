#include <iostream>
using namespace std;

// 이해하는데 많이 애먹음.

long long int D[101][11];

int main()
{
	int n;

	cin >> n;
	D[1][0] = 0;
	for (int i = 1; i <= 9; i++)
	{
		D[1][i] = 1;
	}
	
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			D[i][j] = 0;
			if(j-1 >=0) D[i][j] += D[i - 1][j - 1];
			if (j + 1 <= 9) D[i][j] += D[i -1 ][j + 1];
			D[i][j] %= 1000000000;
		}

	}
	long long int ans=0;
	for (int i = 0; i <= 9; i++)
	{
		ans += D[n][i];
		ans %= 1000000000;
	}

	ans%= 1000000000;
	cout << ans;
	return 0;
}
/*
100개면 0 ~ 99니까 100참조하면 오류
10개면 0 ~ 9니까 10참조하면 오류
D[101][11]로 잡아야 뒷칸에서 참조오류가안생김
*/