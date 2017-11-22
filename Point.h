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
	void set_x(float _x_);
	void set_y(float _y_);
	Point operator +(const Point &data) const;
	Point& operator +=( const Point &data);
	~Point();
};