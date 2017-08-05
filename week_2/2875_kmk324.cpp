#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	int m;
	int k;

	int PossibleCount=0;

	cin >> n >> m >> k;

	int LoopCount = n + m + k;
		while (--LoopCount)
		{
			if (n >= 2 && m >= 1 && m + n >= k + 3)
			{
				n -= 2;
				m -= 1;
				PossibleCount++;
			}
		}
		cout << PossibleCount;
}