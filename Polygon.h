#pragma once
#include "Line.h"
#include "Point.h"
class Poly
{
private:
	Line* lines[200];
	unsigned int count;

public:
	Poly();
	Poly(int N);
	Poly(Line *data_lines);
	void draw() const;
	~Poly();
};

