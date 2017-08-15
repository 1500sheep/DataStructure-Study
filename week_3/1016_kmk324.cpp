#include<iostream>
using namespace std;

bool check[1000001];

int main()
{
	long long int min, max;
	cin >> min >> max;

	for (long long int i = 2; i*i<= max; i++)
	{
		for (long long int j = i*i; j <= max-min; j += i*i)
		{
			check[j] = true;
		}
	}
}