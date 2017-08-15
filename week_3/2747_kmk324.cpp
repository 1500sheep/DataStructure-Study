#include<iostream>
using namespace std;

//2748도 똑같다.

int main()
{
	int n;
	cin >> n;
	long long int FiboNumber[91];
	FiboNumber[0] = 0;
	FiboNumber[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		FiboNumber[i] = FiboNumber[i - 2] + FiboNumber[i - 1];
	}

	cout << FiboNumber[n];
}