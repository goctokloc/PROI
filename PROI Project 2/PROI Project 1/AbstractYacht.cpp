#include "AbstractYacht.h"
#include "Yacht.h"
#include "Macros.h"

int AbstractYacht::yachtCount = 0;

AbstractYacht::AbstractYacht(const Hull& newHull)
{
	yachtCount++;
	hull = newHull;
	crew = new Crew;
	sails = Sails(10.5, 16.5);
	DEBUG_MSG("YACHT CREATED!\n");
}

AbstractYacht::AbstractYacht(const AbstractYacht& y1)
{
	yachtCount++;
	sails = y1.sails;
	hull = y1.hull;
	delete crew;
	crew = new Crew;
	*crew = *(y1.crew);
}

AbstractYacht::~AbstractYacht()
{
	delete crew;
	yachtCount--;
	DEBUG_MSG("YACHT DESTROYED!\n");
}

int AbstractYacht::getYachtCount()
{
	return yachtCount;
}

void AbstractYacht::setCrew(const Crew& newCrew)
{
	delete crew;
	crew = new Crew;
	*crew = newCrew;
}

void AbstractYacht::setSails(const Sails& newSails)
{
	sails = newSails;
}

Hull AbstractYacht::getHull() const
{
	return hull;
}

Crew AbstractYacht::getCrew() const
{
	return *this->crew;
}

Sails AbstractYacht::getSails() const
{
	return sails;
}

AbstractYacht& AbstractYacht::operator =(const AbstractYacht& y1)
{
	sails = y1.sails;
	hull = y1.hull;
	delete crew;
	crew = new Crew;
	*crew = *(y1.crew);
	return *this;
}
