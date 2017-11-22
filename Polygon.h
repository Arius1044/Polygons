#pragma once
#include "Line.h"
#include "Point.h"

class Poly
{
private:
	Line* lines[200];
	unsigned int count;
	void change_Point(const Point &data, int i);
public:
	Poly();
	Poly(int N);
	Poly(Line *data_lines);
	Point& operator[] (int i);
	Poly operator +(const Point &data) const;
	Poly& operator +=(const Point &data);
	void print_points() const;
	void draw() const;
	~Poly();
};

