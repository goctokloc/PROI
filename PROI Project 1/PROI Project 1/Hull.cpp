#include "Hull.h"
#include "Macros.h"


Hull::Hull()
{
	DEBUG_MSG("HULL CREATED!\n");
}

Hull::Hull(double lo, double d, double t)
{
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
