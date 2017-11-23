#include "Line.h"
#include <math.h>
#include <windows.h>
#include <iostream>

using namespace std;

Line::Line(Point _A_, Point _B_)
{
	A = _A_;
	B = _B_;
}
Line::Line()
{
}

float Line::distance()
{

	float temp = sqrt(pow((B.get_x() - A.get_x()), 2) + pow((B.get_y() - A.get_y()), 2));

	return temp;
}

void Line::draw_line() const
{
	POINT op;
	HWND Desc = GetConsoleWindow();
	HDC hDC = GetDC(Desc);
	SelectObject(hDC, GetStockObject(WHITE_PEN));
	MoveToEx(hDC, A.get_x()+600, fabs(A.get_y()-300), &op);
	LineTo(hDC, B.get_x()+600, fabs(B.get_y()-300));
	ReleaseDC(Desc, hDC);
}

Line::~Line()
{
}

Point Line::get_A() const
{
	return A;
}
Point Line::get_B() const
{
	return B;
}

void Line::set_A(Point _A)
{
	A = _A;
}
void Line::set_B(Point _B)
{
	B = _B;
}

void Line::print_A() const
{
	cout << A.get_x() << "\t" << A.get_y() << endl;
}
void Line::print_B() const
{
	cout << B.get_x() << "\t" << B.get_y() << endl;
}