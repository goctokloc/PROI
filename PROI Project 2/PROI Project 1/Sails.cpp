#include "Sails.h"
#include "Macros.h"

Sails::Sails()
{
	/// \return obiekt Sails
	DEBUG_MSG("SAILS CREATED!\n");
}

Sails::Sails(double l, double w)
{
	/// \param double dlugosc zagla
	/// \param double szerkosoc zagla
	/// \return obiekt Sails
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
	/// \return double powierzchnia zagla
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

Sails::operator double() const
{
	return area;
}

std::ostream& operator<<(std::ostream& out, const Sails& s1)
{
	out << s1.length << "\n" << s1.width << "\n" << s1.area << std::endl;
	return  out;
}

std::istream& operator>>(std::istream& in, Sails& s1)
{
	in >> s1.length;
	in >> s1.width;
	in >> s1.area;
	return in;
}
