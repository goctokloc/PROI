#pragma once
#include "Hull.h"
#include "Crew.h"
#include "Sails.h"

class AbstractYacht
{
public:
	AbstractYacht(const Hull& newHull);
	AbstractYacht(const AbstractYacht& y1);
	AbstractYacht();
	virtual ~AbstractYacht();
	virtual double calculateSpeed() = 0;
	virtual double calculateDisplacement() = 0;
	static int getYachtCount();
	virtual void setCrew(const Crew& newCrew);
	void setSails(const Sails& newSails);
	Hull getHull() const;
	Crew getCrew() const;
	Sails getSails() const;
	AbstractYacht& operator =(const AbstractYacht& y1);
	

protected:
	Hull hull;
	Crew* crew;
	Sails sails;
	static int yachtCount;
};
