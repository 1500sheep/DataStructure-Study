#include <iostream>
#include <string>
using namespace std;

string valid(string s)
{
	int num = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			num++;
		}
		else
		{
			num--;
		}
		if (num < 0)
		{
			return "NO";
		}
	}

	if (num == 0)
	{
		return "YES";
	}
	else
	{
		return "NO";
	}
}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin>>s;

		cout << valid(s) << endl;
		
	}

	return 0;
}