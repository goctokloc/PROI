#include "Hull.h"
#include "Macros.h"
#include <string>
#include <iostream>


Hull::Hull()
{
	/// \return obiekt Hull
	DEBUG_MSG("HULL CREATED!\n");
}

Hull::Hull(double lo, double d, double t)
{
	/// \param double dlugosc calkowita
	/// \param double zanurzenie
	/// \param double tonaz
	/// \return obiekt Hull
	lengthOverall = lo;
	draft = d;
	tonnage = t;
	DEBUG_MSG("HULL CREATED!\n");
}

Hull::~Hull()
{
	DEBUG_MSG("HULL DESTROYED!\n");
}

bool operator >(const Hull& s1, const Hull& s2)
{
	return s1.lengthOverall > s2.lengthOverall;
}

bool operator <(const Hull& s1, const Hull& s2)
{
	return s1.lengthOverall < s2.lengthOverall;
}

bool operator ==(const Hull& h1, const Hull& h2)
{
	return (h1.draft == h2.draft && h1.lengthOverall == h2.lengthOverall && h1.tonnage == h2.tonnage);
}

bool operator !=(const Hull& h1, const Hull& h2)
{
	return !(h1 == h2);
}

double& Hull::operator [](size_t idx)
{
	static double Hull::* arr[3] = {&Hull::lengthOverall, &Hull::draft, &Hull::tonnage};
	if (idx <= 2)
	{
		return this->*arr[idx];
	}
	else
	{
		return this->*arr[2];
	}
}

double Hull::getDraft() const
{
	/// \return double zanurzenie
	return draft;
}

double Hull::getLengthOverall() const
{
	/// \return double dlugosc calkowta
	return lengthOverall;
}

std::ostream& operator<<(std::ostream& out, const Hull& h1)
{
	out << h1.lengthOverall << "\n" << h1.draft << "\n" << h1.tonnage << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Hull& h1)
{
	in >> h1.lengthOverall;
	in >> h1.draft;
	in >> h1.tonnage;
	return in;
}
