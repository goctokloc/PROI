#pragma once
class Sails
{
public:
	Sails();
	Sails(double l, double w);
	~Sails();
	double getArea();
	Sails operator + (const Sails& param);
	Sails operator - (const Sails& param);
	operator double();
	friend bool operator > (const Sails &s1, const Sails &s2);
	friend bool operator < (const Sails& s1, const Sails& s2);


private:
	double length;
	double width;
	double area;
};

