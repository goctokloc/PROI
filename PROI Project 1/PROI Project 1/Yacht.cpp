#include "Yacht.h"
#include "Macros.h"




Yacht::Yacht(Hull newHull)
{
	yachtCount++;
	hull = newHull;
	//crew = new Crew;
	sails = Sails(10.5, 16.5);
	DEBUG_MSG("YACHT CREATED!\n");
}

Yacht::Yacht(const Yacht& y1)
{
	yachtCount++;
	sails = y1.sails;
	hull = y1.hull;
	delete crew;
	crew = new Crew;
	*crew = *(y1.crew);
	
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
	delete crew;
	crew = new Crew;
	*crew = newCrew;
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
	Crew temp;
	temp.sailors = crew->sailors;
	temp.captainName = new std::string(*(crew->captainName));
	return temp;
}

Sails Yacht::getSails()
{
	return sails;
}

Yacht& Yacht::operator = (const Yacht& y1)
{
	sails = y1.sails;
	hull = y1.hull;
	delete crew;
	crew = new Crew;
	*crew = *(y1.crew);
	return *this;
}

