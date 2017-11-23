#include "Polygon.h"
#include <iostream>
#include <windows.h>

using namespace std;

Poly::Poly()
{
	count = 0;
}
Poly::Poly(int N)
{

	count = N;
	Point points[400];
	float x, y;

	for (int i = 0; i<N; i++)
	{
		cout << "x" << i + 1 << ": "; cin>> x;
		cout << "y" << i + 1 << ": "; cin >> y;
		points[i] = Point(x,y);
	}

	for (int i = 0; i<N-1; i++)
	{
		lines[i] = Line(points[i], points[i+1]);
	}
	lines[N-1] = Line(points[N-1], points[0]);



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

	for (int i = 0; i < count; i++) lines[i].draw_line();


}


unsigned int Poly::get_count() const
{
	return count;
}

void Poly::set_count(unsigned int _count_)
{
	count = _count_;
}

Line Poly::get_line(int i) const
{
	return lines[i];
}


Poly& Poly::operator = (const Poly &obj)
{
	count = obj.get_count();
	for (int i = 0; i < count; i++)
	{
		lines[i] = obj.get_line(i);
		
	}
	return *this;
}


Poly Poly::operator +(const Point &data) const
{
	Poly res(*this);
	for (int i = 0; i < count; i++)
	{
		Point A = get_line(i).get_A() + data;
		Point B = get_line(i).get_B() + data;
		Line line(A, B);
		res.lines[i] = line;
	}
	return res;
}


Poly& Poly::operator +=(const Point &data)
{
	for (int i = 0; i < count; i++)
	{
		Point A = get_line(i).get_A() + data;
		Point B = get_line(i).get_B() + data;
		Line line(A, B);
		lines[i]=line;
	}
	return *this;
}

//Poly& Poly::operator *=(double koef)
//{
//	Point centr;
//
//	float x = 0, y = 0;
//
//	for (int i = 0; i < count; i++)
//	{
//		Point A = lines[i]->get_A();
//		x += A.get_x();
//		y += A.get_y();
//	}
//
//	centr.set_x(x / 4);
//	centr.set_y(y / 4);
//
//	for (int i = 0; i < count; i++)
//	{
//		Point A = get_line(i).get_A();
//		Point B = get_line(i).get_B();
//		Line line(A, B);
//		set_line(i, line);
//	}
//
//	return *this;
//}

void Poly::print_points() const
{
	for (int i = 0; i < count; i++)
		 lines[i].print_A(); 
}


Poly::~Poly()
{
}
