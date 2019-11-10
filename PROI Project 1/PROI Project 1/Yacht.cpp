#include "Yacht.h"
#include "Macros.h"




Yacht::Yacht(Hull newHull)
{
	hull = newHull;
	crew = new Crew();
	sails = Sails(10.5, 16.5);
	yachtCount++;
	DEBUG_MSG("YACHT CREATED!\n");
}

Yacht::~Yacht()
{
	delete crew;
	yachtCount--;
	DEBUG_MSG("YACHT DESTROYED!\n");
}

int Yacht::getYachtCount()
{
	return yachtCount;
}

void Yacht::setCrew(Crew newCrew)
{
	crew->captainName = newCrew.captainName;
	crew->sailors = newCrew.sailors;
}

void Yacht::setSails(Sails newSails)
{
	sails = newSails;
}

Hull Yacht::getHull()
{
	return hull;
}

Crew Yacht::getCrew()
{
	return *crew;
}

Sails Yacht::getSails()
{
	return sails;
}

Yacht& Yacht::operator= (const Yacht& y1)
{
	sails = y1.sails;
	hull = y1.hull;
	Crew temp;
	temp = *(y1.crew);
	*crew = temp;
	return *this;
}

