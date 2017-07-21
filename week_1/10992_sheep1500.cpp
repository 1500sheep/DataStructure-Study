#include <iostream>

int main()
{
	int n;
	scanf("%d", &n);

	while (n > 100 || n < 1)scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n + i - 1; j++)
		{
			if (i != n) {
				if (j == n - i + 1 || j == n + i - 1) {
					printf("*");
				}
				else {
					printf(" ");
				}

			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}