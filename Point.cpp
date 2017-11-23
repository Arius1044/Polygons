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

void Point::set_x(float _x_)
{
	x = _x_;
}
void Point::set_y(float _y_)
{
	y = _y_;
}


Point Point::operator + (const Point &data) const
{
	Point res(*this);

	res.set_x(res.get_x() + data.get_x());
	res.set_y(res.get_y() + data.get_y());

	return res;

}

Point& Point::operator +=(const Point &data)
{
	x += data.get_x();
	y += data.get_y();

	return *this;
}

Point Point::operator *(float koef) const
{
	Point res(*this);

	res.set_x(res.get_x() * koef);
	res.set_y(res.get_y() * koef);

	return res;
}
Point& Point::operator *=(float koef)
{
	x *= koef;
	y *= koef;

	return *this;
}


Point::~Point()
{

}

