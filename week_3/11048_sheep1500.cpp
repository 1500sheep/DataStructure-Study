#include <iostream>

using namespace std;

int D[1001][1001];
int candy[1001][1001];
int n, m;

int go(int x, int y) {
	if (x > n || y > m)return 0;
	if (D[x][y] >= 0)return D[x][y];
	D[x][y] = go(x + 1, y) + candy[x][y];
	int temp = go(x, y + 1) + candy[x][y];
	if (D[x][y] < temp) D[x][y] = temp;
	return D[x][y];

}

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &candy[i][j]);
			D[i][j] = -1;
		}
	}
	
	cout << go(1, 1) << endl;
	
	return 0;
}