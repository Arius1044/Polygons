#include <iostream>
#include <windows.h>
#include "Polygon.h"
#include "Point.h"
#include "Line.h"
using namespace std;

int main()
{
	Poly a(3);
	Poly b =a * 3;
	Point t(100, 0);
	b = b + t;
	b.draw();
	system("pause");
	return 0;
}