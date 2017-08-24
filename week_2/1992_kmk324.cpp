#include<iostream>
#include<algorithm>
using namespace std;

int a[64][64];
bool same(int x, int y, int n)
{	
	for (int i = 0; i < n; i++)
	{
		for(int j=0; j < n; j++)
		{ 
			if (a[x][y] != a[x + i][y + j])
				return false;
		}
	}
	return true;
}

void Solve(int x, int y, int n)
{
	if (same (x,y,n))
	{
		printf("%d", a[x][y]);
	}
	else
	{
		cout << "(";
		int m = n / 2;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				Solve(x+m*i, y+m*j,m);
			}
		}
		printf(")");
	}
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%1d", &a[i][j]);
		}
	
	}
	Solve(0, 0, n);
	return 0;
}