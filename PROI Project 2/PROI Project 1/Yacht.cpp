#include "Yacht.h"
#include "Macros.h"

int Yacht::yachtCount = 0;


Yacht::Yacht(const Hull& newHull)
{
	yachtCount++;
	hull = newHull;
	crew = new Crew;
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

void Yacht::setCrew(const Crew& newCrew)
{
	delete crew;
	crew = new Crew;
	*crew = newCrew;
}

void Yacht::setSails(const Sails& newSails)
{
	sails = newSails;
}

Hull Yacht::getHull() const
{
	return hull;
}

Crew Yacht::getCrew() const
{
	return *this->crew;
}

Sails Yacht::getSails() const
{
	return sails;
}

Yacht& Yacht::operator =(const Yacht& y1)
{
	sails = y1.sails;
	hull = y1.hull;
	delete crew;
	crew = new Crew;
	*crew = *(y1.crew);
	return *this;
}
