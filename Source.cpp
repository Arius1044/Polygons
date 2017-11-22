#include <iostream>
#include <windows.h>
#include "Polygon.h"
#include "Point.h"
#include "Line.h"
using namespace std;

int main()
{
	Poly a(3);
	Point z(-100, 100);
	a += z;
	a.draw();
	
	system("pause");
	return 0;
}