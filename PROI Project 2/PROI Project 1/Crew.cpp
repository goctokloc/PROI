#include "Crew.h"
#include "Macros.h"
#include <string>

Crew::Crew()
{
	/// \return obiekt Crew
	captainName = new std::string();
	DEBUG_MSG("CREW CREATED!\n");
}

Crew::Crew(const std::string& name, int s)
{
	/// \param string imie kapitana
	/// \param int ilosc zalogi
	/// \return obiekt Crew
	captainName = new std::string(name);
	sailors = s;
	DEBUG_MSG("CREW CREATED!\n");
}

Crew::~Crew()
{
	delete captainName;
	DEBUG_MSG("HULL DESTROYED!\n");
}

Crew::Crew(const Crew& c1)
{
	/// \param obiekt Crew
	/// \return obiekt Crew
	sailors = c1.sailors;
	//delete captainName;
	captainName = new std::string(*(c1.captainName));
}


Crew& Crew::operator =(const Crew& c1)
{
	sailors = c1.sailors;
	delete captainName;
	captainName = new std::string(*(c1.captainName));
	return *this;
}

const std::string& Crew::getCaptainName() const
{
	/// \return string imie kapitana
	return *captainName;
}

int Crew::getSailors() const
{
	/// \return int ilosc zalogi
	return sailors;
}

void Crew::setSailors(int s)
{
	/// \param int ilosc zalogi
	sailors = s;
}
std::ostream& operator<<(std::ostream& out, const Crew& c1)
{
	out << *c1.captainName << "\n" << c1.sailors << std::endl;
	return  out;
	
}

std::istream& operator>>(std::istream& in, Crew& c1)
{
	in >> *c1.captainName;
	in >> c1.sailors;
	return in;
}
