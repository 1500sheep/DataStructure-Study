#include <iostream>
using namespace std;

int main()
{
	int D[1000];
	D[0] = 1;
	D[1] = 1;
	int select;
	cin >> select;

		for (int i = 2; i <= select; i++)
		{
			D[i] = D[i - 1] + D[i - 2];
			D[i] %= 10007;
		}

		cout << D[select];
	return 0;
}