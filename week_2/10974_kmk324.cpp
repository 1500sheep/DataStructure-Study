#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int>P(n);

	for (int i = 0; i < n; i++)
	{
		P[i] = i + 1;
	}
	do
	{
		for (int i = 0; i < n; i++)
		{
			cout << P[i] << " ";
		}
		cout << '\n';
	} while (next_permutation(P.begin(), P.end()));

	return 0;
}