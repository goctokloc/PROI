#pragma once
class Hull
{
public:
	Hull();
	Hull(double lo, double d , double t);
	~Hull();

private:
	double lengthOverall;
	double draft;
	double tonnage;

};

