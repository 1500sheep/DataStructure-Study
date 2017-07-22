#include<iostream>
#include <string>
#include <queue>
using namespace std;

queue<int>josepus;

int main()
{
	int size;
	int JumpCount;

	cin >> size;

	cin >> JumpCount;

	for (int i = 0; i < size; i++)
	{
		josepus.push(i+1);
	}
	cout << "<";
	for (int j = 0; j < size-1; j++)

	{
		for (int i = 0; i < JumpCount-1; i++)

		{
			
			josepus.push(josepus.front());
			josepus.pop();
			
		}
		cout << josepus.front() << ", ";
		josepus.pop();
	}
	cout << josepus.front() << ">";
	josepus.pop();

	return 0;
}