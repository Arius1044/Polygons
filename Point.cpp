#include "Point.h"
Point::Point(float _x_, float _y_)
{
	x = _x_;
	y = _y_;
}
Point::Point()
{
	x = 0;
	y = 0;
}

float Point::get_x() const
{
	return x;
}
float Point::get_y() const
{
	return y;
}
Point::~Point()
{

}

