#include <iostream>

using namespace std;

int go(int n);

int D[1001];
int main()
{
	D[0] = 1;
	D[1] = 1;
	int num;
	cin >> num;
	go(num);
	cout << D[num] << endl;

}
int go(int n) {
	if (D[n] > 0) return D[n];
	
	D[n] = go(n - 1) + go(n-2);

	
	return D[n];
}
