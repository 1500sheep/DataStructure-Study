#include<iostream>
using namespace std;

int main()
{
	int A[101][101];
	int B[101][101];
	int C[101][101];
	int N, M; // 행렬 A는 N행M렬
	int K; // 행렬 B는 M행 K열
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> A[i][j];
	}

	cin >> M >> K;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K; j++)
			cin >> B[i][j];
	}
	/////////////////////////////////행렬 A,B입력끝//////////
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < M; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
		
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < K; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}


}