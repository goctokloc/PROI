#pragma once
#include "AbstractYacht.h"

class Catamaran :
	public AbstractYacht
{
public:
	Catamaran(const Hull& newHull);
	Catamaran(const Catamaran& c1);
	Catamaran& operator =(const Catamaran& c1);
	double calculateDisplacement() override;
	double calculateSpeed() override;
	void setCrew(const Crew& newCrew);
private:
	Hull hulls[2];
};
