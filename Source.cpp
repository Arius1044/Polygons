#include <iostream>
#include <windows.h>
#include "Polygon.h"
#include "Point.h"
#include "Line.h"
using namespace std;

int main()
{
	Poly a(3);
	Poly z(4);
	Poly b;
	Point s(100, 100);
	b = a+s+s;
	z += s;
	z.draw();
	system("pause");
	return 0;
}