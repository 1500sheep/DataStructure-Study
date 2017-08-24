#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// 왜 런타임 에러??--> 배열을 벡터로 바꾸니까 해결됌.
int main()
{
	int N, M;
	cin >> N >> M;
	vector<int>A(N);
	vector<int>B(M);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> B[i];
	}
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	vector<int>C(N+M);
	int LoopCount = N + M;
	int i = 0;	//A의 인덱스,
	int j = 0;	//B의 인덱스,
	int K = 0; // C의 인덱스,
	while(i<N && j<M)
	{
		if (A[i] <= B[j])
		{
			C[K++] = A[i++];// 이게 끝나고 k와 i가 증가한다.
		}
		else
		{
			C[K++] = B[j++];
		}
	}
	while (i<N)
	{
		C[K++] = A[i++];
	}
	while (j < M)
	{
		C[K++] = B[j++];
	}

	LoopCount = N + M;
	for (int i = 0; i < LoopCount; i++)
	{
		cout << C[i] << " ";
	}
	return 0;
}