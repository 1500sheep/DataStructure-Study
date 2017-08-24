#include <iostream>
using namespace std;

int InOrder[100000];
int PostOrder[100000];
int Position[100001];// 숫자 i의 인오더에서의 인덱스.
//출력에 띄어쓰기 하나 안넣어서 계속 오답처리 난 거였다.
void Solve(int Is, int Ie, int Ps, int Pe)
{
	if (Is > Ie || Ps > Pe)
		return ;
	int root;
	root = PostOrder[Pe];
	printf("%d ", root);
	
	int Ir = Position[root];
	int Left = Ir - Is;
	
	Solve(Is, Ir-1, Ps, Ps + Left - 1);
	Solve(Ir + 1, Ie, Ps + Left, Pe - 1);
}

int main()
{
	
	 
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &InOrder[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &PostOrder[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		Position[InOrder[i]] = i;
	}
	
	Solve(1, n, 1, n);

	return 0;

}