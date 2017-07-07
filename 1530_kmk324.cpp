#include <iostream>
#include "polygons.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
	cout << "##도형의 넓이와 둘레 구하기 ##" << endl;

	Triangle tri(5, 12);
	tri.calcArea();
	tri.calcPerimeter();
	
	Rectangle rect(10, 20);
	rect.calcArea();
	rect.calcPerimeter();

	tri.printArea();
	tri.printPerimeter();
	rect.printArea();
	rect.printPerimeter();

	return 0;
}

