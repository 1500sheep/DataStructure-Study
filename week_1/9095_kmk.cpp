#include<iostream>
using namespace std;
//D[n] 은 정수 n을 1,2,3의 조합으로 나타내는 방법의 수.
//D[n] = D[n-1]+D[n-2]+D[n-3];
int main()
{
	int T;
	cin >> T;
	int D[11];
	D[0] = 0;
	D[1] = 1;
	D[2] = 2;
	D[3] = 4;

	while (T--)
	{
		int n;
		cin >> n;
		
		for (int i = 4; i <= n; i++)
		{
			D[i] = D[i - 3] + D[i - 2] + D[i - 1];
		}

		cout << D[n] << endl;


	}
}