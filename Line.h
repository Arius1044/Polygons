#pragma once
#include "Point.h"

class Line
{
private:
	Point A, B;
public:
	Line(Point _A_, Point _B_);
	~Line();
	void draw_line() const;
};

