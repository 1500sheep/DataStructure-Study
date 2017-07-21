#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string s;
	cin >> s;
	stack <int> st;
	int numcount = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			st.push(i);  //  '(' 일때는 인덱스값을 푸쉬한다. 
		}
		else 
		{
			if (st.top()+1==i)
			{
				st.pop();  // top+1에 현재 인덱스 값이 있다는 것은 top=i-1이라는 뜻이고, 결국 그 전의 값(s[i-1])이 '(' 였다는 것이다. ---> 레이저를 만든다. 
				numcount += st.size();
			}
			else
			{
				numcount++;
				st.pop();
			}
		}
	}

	cout << numcount;

	return 0;
}

//강의부분 또 봐서 확실히 이해하자.