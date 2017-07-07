#include "Derived.h"
#include "Base.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "[upcasting Example]" << endl << endl;
	Base* basePtr = new Base(10, 20);
	Derived* derPtr = new Derived(30, 50);

	basePtr->printSum();
	derPtr->printSum();

	basePtr = derPtr;
	cout << endl << "after upcasting / Derived -> Base.." << endl;
	basePtr->printSum();
	derPtr->printSum();
	/////////////////////////////////////////////////////////////

	cout << endl << "[Downcasting Example1] " << endl << endl;
	Base* basePtr2 = new Derived(10, 20);
	Derived* derPtr2 = new Derived(30, 50);

	basePtr2->printSum();
	derPtr2->printSum();

	derPtr2 = static_cast<Derived*>(basePtr2); //¿Ü¿ì±â
	cout << endl << "after downcasting / Base -> Derived.." << endl;

	basePtr2->printSum();
	derPtr2->printSum();
	

	cout << endl << "[Downcasting Example2]" << endl << endl;
	Base* basePtr3 = new Base(10, 20);
	Derived* derPtr3 = new Derived(30, 50);

	cout << endl << "After downcasting Base->Derived...." << endl;
	derPtr3 =/*static_cast*/(Derived*)(basePtr3); // ???
	basePtr3->printSum();
	derPtr3->printSum();

	system("pause");
	
	return 0;
}