#include <iostream>
#include <stack>
#include <string>
using namespace std;

char temp[600000];

// 야매로 조짐.
// 접근방식이 출제 의도와 다르다.
// 다시 해보기.
int main()
{
	string s;
	string command;
	int CommandCount;
	int Couser;


	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		temp[i] = s[i];
	}
	cin >> CommandCount;

	stack <char> q1406;
	
	for (int i = 0; i < s.size(); i++)
	{
		q1406.push(s[i]);
	}
		
	Couser = q1406.size();

	while (CommandCount--)
	{
		cin >> command;

		if (command == "L")
		{
			Couser -= 1;
		}
		if (command == "D")
		{
			Couser += 1;
		}
		if (command == "B")
		{
			if (Couser == q1406.size())
			{
				temp[Couser - 1] = NULL;
			}
			else
			{
				for (int i = Couser - 1; i < q1406.size() - 1; i++)
				{
					temp[i] = temp[i + 1];
					temp[i+1] = NULL;
				}
			}
			}
		if (command == "P")
		{
			char px;
			cin >> px;

			if (Couser == q1406.size())
			{
				temp[Couser ] = px;
				Couser++;
			}
			else
			{
				
				
				for (int i = q1406.size(); i >= Couser ; i--)
				{
					if (i == Couser)
					{
						temp[Couser] = px;
					}
					else
					{
						temp[i ] = temp[i-1];
					}
					
				}
		
				Couser++;
			}
		}

		}
	for (int i = 0; i < 100; i++)
	{
		cout << temp[i];
		
	}

	
	// cout << q1406.size();

	return 0;
}