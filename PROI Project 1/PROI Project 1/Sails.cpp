#include "Sails.h"
#include "Macros.h"

Sails::Sails()
{
	DEBUG_MSG("SAILS CREATED!\n");
}

Sails::Sails(double l, double w)
{
	length = l;
	width = w;
	area = l * w;
	DEBUG_MSG("SAILS CREATED!\n");
}

Sails::~Sails()
{
	DEBUG_MSG("SAILS DESTROYED!\n");
}

double Sails::getArea()
{
	return area;
}

Sails Sails::operator +(const Sails& param)
{
	Sails temp;
	temp.length = length + param.length;
	temp.width = width + param.width;
	temp.area = area + param.area;
	return temp;
}

Sails Sails::operator -(const Sails& param)
{
	Sails temp;
	temp.length = length - param.length;
	temp.width = width - param.width;
	temp.area = area - param.area;

	if (temp.length < 0 || temp.width < 0 || temp.area < 0)
	{
		temp.length = 0;
		temp.width = 0;
		temp.area = 0;
	}
	return temp;
}

bool operator >(const Sails& s1, const Sails& s2)
{
	return s1.area > s2.area;
}

bool operator <(const Sails& s1, const Sails& s2)
{
	return s1.area < s2.area;
}

Sails::operator double()
{
	return area;
}
