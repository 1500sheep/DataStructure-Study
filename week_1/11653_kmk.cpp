#include <iostream>
using namespace std;
//소인수분해 문제;
int main()
{
	int N;
	cin >> N;

	for (int i = 2; i*i <= N; i++)
	{
		while (N%i == 0)
		{
			cout << i << endl;
			N/= i;
			
		}
		
	}
	// N이 소수인 경우.
	///////////////////////////////////이부분 헷갈림.
	if (N > 1)
	{
		cout << N;
	}
	//////////////////////////////////////////
	return 0;
}
