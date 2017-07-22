#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int D[1000];
	int P[10000];
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> P[i];
	}
	D[0] = 0;
	D[1] = P[1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (D[i - j] + P[j] > D[i])
			{
				D[i] = D[i - j] + P[j];
			}
		}
	}
	cout << D[n];


	return 0;
}