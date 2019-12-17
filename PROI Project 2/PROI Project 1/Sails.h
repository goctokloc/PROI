#pragma once
#include <istream>

class Sails
/// klasa zagli
{
public:
	Sails();
	Sails(double l, double w);
	~Sails();
	double getArea();
	Sails operator +(const Sails& param);
	Sails operator -(const Sails& param);
	operator double() const;
	friend bool operator >(const Sails& s1, const Sails& s2);
	friend bool operator <(const Sails& s1, const Sails& s2);
	friend std::ostream& operator << (std::ostream& out, const Sails& s1);
	friend std::istream& operator >> (std::istream& in, Sails& s1);


private:
	/// dlugosc zagla
	double length;
	///szerokosc zagla
	double width;
	///powierzchnia zagla
	double area;
};
