#pragma once
#include "Crew.h"
#include "Hull.h"
#include "Sails.h"

class Yacht
{
public:
	Yacht(const Hull& newHull);
	Yacht(const Yacht& y1);
	~Yacht();
	static int getYachtCount();
	void setCrew(const Crew& newCrew);
	void setSails(const Sails& newSails);
	Hull getHull() const;
	Crew getCrew() const;
	Sails getSails() const;
	Yacht& operator =(const Yacht& y1);

private:
	Hull hull;
	Crew* crew;
	Sails sails;
	static int yachtCount;
};
