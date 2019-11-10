#pragma once
#include <iostream>
class Crew
{
	friend class Yacht;
public:
	Crew();
	Crew(const std::string& name, int s);
	~Crew();
	Crew& operator= (const Crew& c1);

private:
	std::string* captainName;
	int sailors;
};
