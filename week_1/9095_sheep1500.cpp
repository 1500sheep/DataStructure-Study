#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int D[12];
	D[1] = 1;
	D[2] = 2;
	D[3] = 4;
	for (int i = 4; i <= 11; i++) {
		D[i] = D[i - 1] + D[i - 2] + D[i - 3];
	}
	while (n--) {
		int num;
		cin >> num;
		cout << D[num] << endl;
	}

}

