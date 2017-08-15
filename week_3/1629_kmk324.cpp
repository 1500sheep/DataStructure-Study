#include<iostream>
using namespace std;

long long int calc(long long int a, long long int b, long long int c)
{
	if (b==0)
	{
		return 1;
	}
	else if (b == 1)
	{
		return a%c;
	}
	else if (b % 2 == 0)
	{
		long long int temp = calc(a, b / 2, c)%c;
		return (temp*temp)%c;
	}
	else //b%2 == 1;
	{
		return ((a%c)* (calc(a, b -1, c)%c))%c;
	}

}



int main()
{
	long long int A, B, C;
	cin >> A >> B >> C;
	cout << calc(A, B, C) << '\n';

	return 0;
}