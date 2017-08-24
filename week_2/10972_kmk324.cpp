#include<iostream>
#include <algorithm>
using namespace std;

int P[10001];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> P[i];
	}
	if (next_permutation(P, P + n))
	{
		for (int i = 0; i < n; i++)
		{

			cout << P[i] << " ";
		}
	}
	else
	{
		cout << "-1" << endl;
	}


		return 0;
}