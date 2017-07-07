#include <iostream>
#include <string>

using namespace std;

int main() {
	string s0("Initial string");
	// constructors used in the same order as described above:
	//기본 생성자를 이용한 s1 객체 선언
	string s1;
	//s0 객체를 //s0 객체를 복사하는 s2 객체 선언
	string s2(s0);
	//s0 객체 //s0 객체 중 8번째 문자부터 3개의 문자로 초기화하는 s3 객체 선언
	string s3(s0,8,3);
	//"A character sequence"의 //"A character sequence"의 문자열 중 6개의 문자로 초기화하는 s4 객체 선언
	
	string s4("A character sequence",6);
	//"Another character sequence"의 //"Another character sequence"의 문자열로 초기화하는 s5 객체 선언
	string s5("Another character sequence");
	//'x'문자 //'x'문자 10개로 초기화하는 s6 객체 선언
	string s6(10, 'x');
	string s7(s0.begin(), s0.end() - 4);
	s1 = ' ';
	//template class Iterator //template class Iterator Iterator로 지정 된 시작과 끝으로 초기화하는 객체 s7 선언
	cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
	cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6: " << s6;
	cout << "\ns7: " << s7 << endl;
	return 0;

}