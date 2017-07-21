#include <iostream>
#include <string>
using namespace std;

//돌아가긴 하는데 너무 조잡하게 짰다.
//런타임 오류라는데???
//시간날 때 다시 풀어보기.
class StackBase
{

public :
	int m_size;
	int data[1000];
		StackBase(int size)
	{
		m_size = size;
	}
		bool empty()
		{
			if (m_size == 0)
				return true;
			else
				return false;
		}
		int top()
		{
			if (empty())
				return -1;
			else
				return data[m_size - 1];
		}
};


void stack(string Command, StackBase &s1);

int main()
{
int size = 0;
	int CommandCount = 0;
	int HopingCommandCount;
	cin >> HopingCommandCount;
	string Command;
	StackBase s(0);
	while (1)
	{
		cin >> Command;
		CommandCount++;
		stack(Command, s);
		if (CommandCount == HopingCommandCount)
			exit(100);

	}
	
	

}

void stack(string Command, StackBase &s1)
{
	

	if (Command == "push")
	{
		int num;
		cin >> num;
		s1.data[s1.m_size] = num;
		s1.m_size++;

	}
	else if (Command == "pop")
	{
		cout << s1.data[s1.m_size - 1];
		s1.data[s1.m_size-1] = NULL;
		s1.m_size--;
	}
	else if (Command == "empty")
	{
		cout << s1.empty() << endl;
	}
	else if (Command == "top")
	{
		cout << s1.top() << endl;
	}
	else if (Command == "size")
	{
		cout << s1.m_size << endl;
	}
}



