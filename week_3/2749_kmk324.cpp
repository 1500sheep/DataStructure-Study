#include<iostream>
#include <vector>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	n = n% 1500000;
	vector<long long int> FiboNumber(n+1);
	FiboNumber[0] = 0;
	FiboNumber[1] = 1;
	
	for (int i = 2; i <= n; i++)
	{
		FiboNumber[i] = (FiboNumber[i - 2] % 1000000 + FiboNumber[i - 1] % 1000000) % 1000000;
	}

	cout << FiboNumber[n];
}