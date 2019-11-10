#include "Crew.h"
#include "Macros.h"

Crew::Crew()
{
	captainName = new std::string();
	DEBUG_MSG("CREW CREATED!\n");
}

Crew::Crew(const std::string& name, int s)
{
	captainName = new std::string(name);
	sailors = s;
	DEBUG_MSG("CREW CREATED!\n");
}

Crew::~Crew()
{
	//delete captainName;
	DEBUG_MSG("HULL DESTROYED!\n");
}

Crew::Crew(const Crew& c1)
{
	sailors = c1.sailors;
	//delete captainName;
	captainName = new std::string(*(c1.captainName));
}


Crew& Crew::operator = (const Crew& c1)
{
	sailors = c1.sailors;
	delete captainName;
	captainName = new std::string(*(c1.captainName));
	return *this;
}
const std::string& Crew::getCaptainName() const
{
	 return *captainName;
}

