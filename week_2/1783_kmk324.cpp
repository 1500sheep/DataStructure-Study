#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int height, width;
	int ans;
	cin >> height >> width;

	if (height == 1)
	{
		ans = 1;
	}
	else if (height == 2)
	{
		ans = min(4, (width + 1) / 2);
	}
	else if (height >= 3)
	{
		if (width >= 7)
		{
			ans = width - 2;
		}
		else
		{
			ans = min(4, width);
		}
	}
	cout << ans;
	return 0;
}