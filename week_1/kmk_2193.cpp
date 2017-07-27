#include <iostream>
using namespace std;

int main()
{
	long long D[91];  //나의 오류 : 1<n<90 이라 해서 단순히 D[90]; 을 선언했다.
	// 하지만 D[90]을 선언하면 실질적 인덱스는 89까지 이므로 90의 값에 쓰레기값이 들어간다.
	// 따라서 원하는 인덱스값+1 만큼 선언해 주어야 한다.

	int n;
	cin >> n;
	D[1] = 1;
	D[2] = 1;
		for (int i = 3; i <= n; i++)
		{
			D[i] = D[i - 1] + D[i - 2];
		}

		cout << D[n] << endl;
		return 0;
}