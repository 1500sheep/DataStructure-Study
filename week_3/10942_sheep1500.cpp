#include <iostream>

using namespace std;

int D[2001];

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)scanf("%d", &D[i]);
	
	int m;
	scanf("%d", &m);

	while (m--) {
		int s, e;
		scanf("%d %d", &s, &e);
		int j = 0;
		bool check = true;
		for (int i = s; i <= (s + e) / 2; i++) {
			if (D[i] != D[e-j]) {
				check = false;
				break;
			}
			j++;
		}
		if (check) {
			printf("1\n");
		}else{
			printf("0\n");
		}

	}

	return 0;
}