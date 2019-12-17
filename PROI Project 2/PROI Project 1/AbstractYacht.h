#pragma once
#include "Hull.h"
#include "Crew.h"
#include "Sails.h"

class AbstractYacht
///klasa abstrakcyjna jachtu
{
public:
	AbstractYacht(); 
	AbstractYacht(const Hull& newHull);
	AbstractYacht(const AbstractYacht& y1);
	virtual ~AbstractYacht();
	virtual double calculateSpeed() = 0;
	virtual double calculateDisplacement() = 0;
	virtual void print(std::ostream& out) = 0;
	static int getYachtCount();
	virtual void setCrew(const Crew& newCrew);
	void setSails(const Sails& newSails);
	Hull getHull() const;
	Crew getCrew() const;
	Sails getSails() const;
	AbstractYacht& operator =(const AbstractYacht& y1);
	friend std::ostream& operator << (std::ostream& out, const AbstractYacht& y1);
	friend std::istream& operator >> (std::istream& in, AbstractYacht& y1);
protected:
	///pole kadluba
	Hull hull;
	///pole zalogi
	Crew* crew;
	///pole zagli
	Sails sails;
	///licznik jachtow
	static int yachtCount; 
};
