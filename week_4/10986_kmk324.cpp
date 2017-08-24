#include<iostream>
#include <algorithm>
#include<vector>
#include <cstdio>
using namespace std;
// #include <vector>를 #include < vector> 로 했다고 컴파일 에러 계속 발생했음...
// 실행에는 문제가 없었지만 백준 알고리즘 채점방식에서 위와 같은 방식으로 헤더를 선언하면 에러가
// 발생함을 알았다...
int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] %= m;
	}
	vector <long long> cnt(m, 0);
	cnt[0] = 1; //와이.
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		sum %= m;
		cnt[sum] += 1;
	}

	long long ans = 0;
	for (int i = 0; i < m; i++)
	{
		ans += (long long)cnt[i] * (long long)(cnt[i] - 1) / 2LL;
	}
	cout << ans;
	return 0;
}