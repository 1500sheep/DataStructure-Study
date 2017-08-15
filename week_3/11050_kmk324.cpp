#include <iostream>
using namespace std;
int Facto(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return Facto(n - 1)*n;}
int main()
{
	int N,K;
	cin >> N >> K;
	cout << Facto(N) / (Facto(N - K)*Facto(K));
}