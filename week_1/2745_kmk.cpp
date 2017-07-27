#include <iostream>
#include <string>
using namespace std;

int main()
{
	int answer = 0;
	string num;
	int b;
	cin >> num;
	cin >> b;
	int pow = 1;
	for (int i = 0; i < num.size()-1; i++)
	{
		pow *= b;
	}
	

	for (int i = 0; i < num.size(); i++)
	{
		

		if ('0' <= num[i] && num[i] <= '9')
		{
			answer += (num[i] - '0') * pow;
		}
		else
		{
			answer += (num[i] - 'A'+10) * pow;
		}
		pow /= b;
	}
	cout << answer << endl;
	return 0;
}