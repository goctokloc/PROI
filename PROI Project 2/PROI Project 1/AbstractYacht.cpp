#include "AbstractYacht.h"
#include "Yacht.h"
#include "Macros.h"

int AbstractYacht::yachtCount = 0;

AbstractYacht::AbstractYacht()
{
	/// \return obiekt AbstractYacht
	crew = new Crew;
	yachtCount++;
	DEBUG_MSG("YACHT CREATED!\n");
}

AbstractYacht::AbstractYacht(const Hull& newHull)
{
	/// \param obiekt Hull
	/// \return obiekt AbstractYacht
	yachtCount++;
	hull = newHull;
	crew = new Crew;
	sails = Sails(10.5, 16.5);
	DEBUG_MSG("YACHT CREATED!\n");
}

AbstractYacht::AbstractYacht(const AbstractYacht& y1)
{
	/// \param obiekt AbstractYacht
	/// \return obiekt AbstractYacht
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
	
	/// \return int ilosc jachtow
	return yachtCount;
}

void AbstractYacht::setCrew(const Crew& newCrew)
{
	/// \param obiekt Crew
	
	delete crew;
	crew = new Crew;
	*crew = newCrew;
}

void AbstractYacht::setSails(const Sails& newSails)
{
	/// \param obiekt Sails
	
	sails = newSails;
}

Hull AbstractYacht::getHull() const
{
	
	/// \return obiekt Hull
	return hull;
}

Crew AbstractYacht::getCrew() const
{
	/// \return obiekt Crew
	return *this->crew;
}

Sails AbstractYacht::getSails() const
{
	/// \return obiekt Sails
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

std::ostream& operator<<(std::ostream& out, const AbstractYacht& y1)
{
	out << y1.hull << y1.sails << *y1.crew << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, AbstractYacht& y1)
{
	in >> y1.hull;
	in >> y1.sails;
	in >> *y1.crew;
	return in;
}
