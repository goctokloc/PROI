#pragma once
#include "Crew.h"
#include "Hull.h"
#include "Sails.h"
class Yacht
{
public:
	Yacht(Hull newHull);
	Yacht(const Yacht& y1);
	~Yacht();
	static int getYachtCount();
	void setCrew(Crew newCrew);
	void setSails(Sails newSails);
	Hull getHull();
	Crew getCrew();
	Sails getSails();
	Yacht& operator = (const Yacht& y1);

private:
	Hull hull;
	Crew* crew;
	Sails sails;
	static int yachtCount;

};
