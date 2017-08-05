#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int time[1001];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> time[i];
	}
	sort(time, time + n);

	int TempAns=0;
	int ans=0;
	for (int i = 0; i < n; i++)
	{
		TempAns += time[i];
		ans += TempAns;
	}
	cout << ans;
}