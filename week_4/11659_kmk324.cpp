#include <iostream>
#include <vector>
using namespace std;

// cin / cout 을 쓰면 시간 초과가 발생한다.

// 해결책으로는 scanf / printf 를 사용하거나,
// cin / cout 전에 std::ios::sync_with_stdio(false) 를 미리 호출해주어서 
// 시간 지연을 막는 방법이 있다.

int main()
{
	int N, M;
	int Sum_S, Sum_E;
	scanf("%d %d", &N, &M);
	
	vector<int> arr(N+1);
	int Ds[100001] = {0};
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &arr[i]);
		Ds[i] = Ds[i-1] + arr[i];
	}

	while (M--)
	{
		int ans = 0;
		scanf("%d %d", &Sum_S, &Sum_E);
		printf("%d\n", Ds[Sum_E]-Ds[Sum_S-1]);
	}
	return 0;
}