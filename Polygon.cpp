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
	POINT op;
	HWND Desc = GetConsoleWindow();
	HDC hDC = GetDC(Desc);
	SelectObject(hDC, GetStockObject(WHITE_PEN));
	MoveToEx(hDC, 600, 0, &op);
	LineTo(hDC, 600, 600);

	MoveToEx(hDC, 200, 300, &op);
	LineTo(hDC, 1000, 300);
	ReleaseDC(Desc, hDC);

	for (int i = 0; i < count; i++) lines[i]->draw_line();


}
Point&  Poly::operator[] (int i)
{
	Point z;
	if ((i >= count) || (i<0)) return z;

	return  lines[i]->get_A();
}

void Poly::change_Point(const Point &data, int i)
{
		lines[i]->set_A(lines[i]->get_A() + data);
		lines[i]->set_B(lines[i]->get_B() + data);
}

Poly Poly::operator +(const Point &data) const
{
	Poly res(*this);
	for (int i = 0; i < count; i++)
		res[i]+= data;
	return res;
}
Poly& Poly::operator +=(const Point &data)
{
	for (int i = 0; i < count; i++)
	{
		change_Point(data, i);
	}
	return *this;
}

void Poly::print_points() const
{
	for (int i = 0; i < count; i++)
		 lines[i]->print_A(); 
}
Poly::~Poly()
{
}
