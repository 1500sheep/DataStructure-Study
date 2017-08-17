#include <iostream>
using namespace std;

int main()
{
	int A[100][100];
	int N, M;
	cin >> N >> M;

	int temp;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> temp;
			A[i][j] = A[i][j] + temp;
		}
	}



	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}