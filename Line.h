#pragma once
#include "Point.h"

class Line
{
private:
	Point A, B;
public:
	Line(Point _A_, Point _B_);
	Line();
	float distance();
	~Line();
	void draw_line() const;
	Point get_A() const;
	Point get_B() const;
	void set_A(Point _A);
	void set_B(Point _B);
	void print_A() const;
	void print_B() const;
};

