#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// reverse(스트링이름.begin(), 스트링이름.end()); 스트링의 순서를 바꿔준다. 헤더는 #include<algorithm>
int main()
{
	string AfterConvert="";
	//65 ==A95
	long int N; // 원래 숫자;
	int B; // 원하는 진법.

	cin >> N >> B;

	while (N > 0)
	{
		int r = N%B;
		if (r < 10)
		{
			AfterConvert += (char)(r+'0'); //중요
		}
		else
		{
			AfterConvert += (char)(r - 10 + 'A');
		}
		N /= B;
	}
	reverse(AfterConvert.begin(), AfterConvert.end());

	cout << AfterConvert << endl;;
	return 0;


}