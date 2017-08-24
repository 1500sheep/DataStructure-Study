#include<iostream>
#include<string>
#include <cstring>
using namespace std; 
//cin cout -> scanf printf로 바꾸니 시간초과 문제 해결.

void add(int &S ,int x)
{
	x--;
	S= S | (1 << x); 
}

int remove(int &S, int x)
{
	x--;
	return S= S & ~((1<<x));
}

int check(int &S, int x)
{
	x--;
	int checknumber;
	checknumber = S & (1 << x);
	if (checknumber == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int all(int &S,int N)
{
	return S= (1 << N) - 1;
}
int empty(int &S)
{
	return S = 0;
}
int toggle(int &S, int x)
{
	x--;
	return S= S ^ (1 << x);
}

int main()
{
	int M;
	int n = 20;
	int S = 0;
	cin >> M;
	string Command;
	while (--M)
	{
		cin >>Command;
			if (Command == "all")
			{
				all(S, n);
			}
			else if (Command == "empty")
			{
				empty(S);
			}
			else if (Command == "add")
			{
				int x;
				scanf("%d",&x);
				add(S, x);
				
			}
			else if (Command == "remove")
			{
				int x;
				scanf("%d", &x);
				remove(S, x);
			}
			else if (Command == "check")
			{
				int x;
				scanf("%d", &x);
				printf("%d", check(S, x));
			}
			else if (Command == "toggle")
			{
				int x;
				scanf("%d", &x);
				toggle(S, x);
			}
	}


	return 0;
}