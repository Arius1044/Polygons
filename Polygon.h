#pragma once
#include "Line.h"
#include "Point.h"

class Poly
{
private:
	Line lines[200];
	unsigned int count;
public:
	Poly();
	Poly(int N);
	Poly(Line *data_lines);
	unsigned int get_count() const;
	void set_count(unsigned int _count_);
	Line get_line(int i) const;
	Poly operator +(const Point &data) const;
	Poly& operator +=(const Point &data);
	//Poly& operator *=(double koef);
	Poly& operator = (const Poly &obj);
	void print_points() const;
	void draw() const;
	~Poly();
};

