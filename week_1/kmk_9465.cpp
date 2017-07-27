#include<iostream>
using namespace std;
// what's wrong?
// Áê´ï
long long int Max(long long int a, long long int b, long long int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else if (c > a && c > b)
	{
		return c;
	}
	else
		return 0;
}
long long int Max(long long int a, long long int b)
{
	if (a > b)
	{
		return a;
	}
	else if (b > a)
	{
		return b;
	}
	else
		return 0;
}

int main()
{
	//	D[n][0] D[n][1] D[n][2]
	//		x		O		x
	//		x		x		O
	int T;
	cin >> T;

	
	long long int A[2][100];
	long long int D[100][3];

	
	while (T--)
	{

		long long int n;
		cin >> n;

		for (int i = 0; i <= 1; i++)
		{
			for (int j = 1; j <= n; j++)

			{
				cin >> A[i][j];
				A[i][j] %= 101;
			}
		}
		D[0][0] = 0;
		D[0][1] = 0;
		D[0][2] = 0;

		for (int i = 1; i <= n; i++)
		{
			D[i][0] = Max(D[i - 1][0], D[i - 1][1], D[i - 1][2]);
			D[i][1] = Max(D[i - 1][0] + A[0][i], D[i - 1][2] + A[0][i]);
			D[i][2] = Max(D[i - 1][0] + A[1][i], D[i - 1][1] + A[1][i]);
		}

		long long int answer = 0;
		
		answer = Max(D[n - 1][0], D[n - 1][1], D[n - 1][2]);
		cout << answer;
	}

	return 0;
}