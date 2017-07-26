#include <iostream>

using namespace std;
int gcd(int a, int b);
int main()
{
	int a, b;
	cin >> a >> b;
	int g = gcd(a, b);
	cout << g << endl;
	cout << (a*b) / g << endl;
	return 0;
}
int gcd(int a, int b)
{
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}

}