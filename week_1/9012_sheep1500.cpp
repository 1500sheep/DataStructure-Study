#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);


	while (n--) {
		string str;
		cin >> str;
		stack<char>s;
		bool check = true;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				s.push('(');
			}
			else if (str[i] == ')') {
				if (s.empty()) {
					check = false;
					break;
				}else{
					if (s.top() == '(') {
						s.pop();
					}else {
						s.push(')');
					}
				}
			}
		}
		if(check){
			if (s.empty()) {
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else {
			printf("NO\n");
		}
		
	}

	return 0;
}