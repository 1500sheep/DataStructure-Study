#include <iostream>
#include "list.h"
using namespace std;

int main()
{
	Intlist list1;
	cout << "list1 출력 " << endl;
	list1.print();

	list1.addInteger(1);
	list1.addInteger(3);
	list1.addInteger(2);
	cout << "list1 출력" << endl;
	list1.print();

	Intlist list2(list1);
	list2.addInteger(5);
	list2.addInteger(7);
	list2.addInteger(6);
	cout << "list2 출력" << endl;
	list2.print();
}