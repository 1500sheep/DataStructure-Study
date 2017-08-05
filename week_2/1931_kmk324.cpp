#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct meeting
{
	int begin;
	int end;
};

bool cmp(const meeting &u, const meeting &v)
{
	if (u.end == v.end)
	{
		return u.begin < v.begin;
	}
	else
		return u.end < v.end;
}


int main()
{
	int n;
	cin >> n;

	vector<meeting> a(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].begin >> a[i].end;
	}

	sort(a.begin(), a.end(), cmp); //// 무슨 원리로 정렬되는지 이해필요

	int now=0;
	int ans=0;
	for (int i = 0; i < n; i++)
	{
		if (now <= a[i].begin)
		{
			now = a[i].end;
			ans++;
		}
	}

	cout << ans;
	return 0;
}