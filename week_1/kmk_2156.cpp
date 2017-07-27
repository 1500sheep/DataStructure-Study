#include <iostream>
using namespace std;
//포도주 문제
int main()
{
	int D[10001];
	int A[10001];
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}
	A[0] = 0;
	D[0] = 0;
	D[1] = A[1];
	D[2] = A[1] + A[2];

	for (int i = 3; i <= n; i++)
	{
		D[i] = D[i - 1];
		if (D[i] < D[i - 2] + A[i])
		{
			D[i] = D[i - 2] + A[i];
		}
		if (D[i] < D[i - 3] + A[i- 1] + A[i])
		{
			D[i] = D[i - 3] + A[i - 1] + A[i];
		}
	}
	cout << D[n];

	return 0;
}