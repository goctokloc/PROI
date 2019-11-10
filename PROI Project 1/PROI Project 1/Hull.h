#pragma once
class Hull
{
public:
	Hull();
	Hull(double lo, double d , double t);
	~Hull();
	double& operator[] (size_t idx);
	friend bool operator> (const Hull& s1, const Hull& s2);
	friend bool operator< (const Hull& s1, const Hull& s2);
	friend bool operator== (const Hull& h1, const Hull& h2);
	friend bool operator!= (const Hull& h1, const Hull& h2);

private:
	double lengthOverall;
	double draft;
	double tonnage;

};

