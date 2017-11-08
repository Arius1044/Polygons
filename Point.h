#pragma once

class Point
{
private:
	float x,y;
public:
	Point();
	Point(float _x_, float _y_);
	float get_x() const;
	float get_y() const;
	~Point();
};