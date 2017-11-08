#include "Line.h"
#include <windows.h>

Line::Line(Point _A_, Point _B_)
{
	A = _A_;
	B = _B_;
}


void Line::draw_line() const
{
	POINT op;
	HWND Desc = GetConsoleWindow();
	HDC hDC = GetDC(Desc);
	SelectObject(hDC, GetStockObject(WHITE_PEN));
	MoveToEx(hDC, A.get_x(), A.get_y(), &op);
	LineTo(hDC, B.get_x(), B.get_y());
	ReleaseDC(Desc, hDC);
}

Line::~Line()
{
}
