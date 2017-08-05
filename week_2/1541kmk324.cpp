#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	bool minus = false;
	
	string n;
	cin >> n;
	vector<int> num;
	vector<int> sign;
	int cur = 0;
	sign.push_back(1); // 왜 들어가는거지??  -> 처음수가 무조건 양수니까
	for (int i = 0; i < n.size(); i++)
	{
		if (n[i] == '-' || n[i] == '+')
		{
			if (n[i] == '-')
			{
				sign.push_back(-1);
			}
			else
			{
				sign.push_back(1);
			}
			num.push_back(cur); // 까먹었었음.
			cur = 0;
		}
		else
			cur = cur * 10 + (n[i] - '0');
			/// num.push_back(cur);  여기가 아님. 위에임;
	}

	num.push_back(cur); //저장 못한 커런트넘버를 위해서 작성한다. 저장못한 값이 없었어도 0이 저장되기 때문에 문제없다.
	int ans = 0;
	for (int i = 0; i < num.size(); i++)
	{
		if (sign[i] == -1)
		{
			minus = true;
		}
		if (minus)
		{
			ans -= num[i];
		}
		else
		{
			ans += num[i];
		}
		
	}
	
	cout << ans;

	return 0;
}