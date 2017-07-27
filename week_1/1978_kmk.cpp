#include<iostream>
using namespace std;

//소수 찾기 문제
// rere 부울 함수  안 만들고 다시 해보기.
bool is_prime(int x)
{
	if (x < 2)
	{
		return false;
	}
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int N;
	cin >> N;
	int SosuCount = 0;
	int sosu[100];

	for (int i = 0; i < N; i++)
	{
		cin >> sosu[i];
	}
	///////////////////////////////////////
	for (int i = 0; i < N; i++)
	{	
		if (is_prime(sosu[i]))
		{
			SosuCount++;
		}
	}
	cout << SosuCount;
}