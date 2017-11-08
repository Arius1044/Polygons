#include "Polygon.h"
#include <iostream>
#include <windows.h>

using namespace std;

Poly::Poly()
{
}

Poly::Poly(int N)
{

	count = N;
	Point *points[400];
	float x, y;

	for (int i = 0; i<N; i++)
	{
		cout << "x" << i + 1 << ": "; cin>> x;
		cout << "y" << i + 1 << ": "; cin >> y;
		points[i] = new Point(x,y);
	}

	for (int i = 0; i<N-1; i++)
	{
		lines[i] = new Line(*points[i], *points[i+1]);
	}
	lines[N-1] = new Line(*points[N-1], *points[0]);



}
Poly::Poly(Line *data_lines)
{
	
}

void Poly::draw() const
{
	for (int i = 0; i < count; i++) lines[i]->draw_line();
}

Poly::~Poly()
{
}
