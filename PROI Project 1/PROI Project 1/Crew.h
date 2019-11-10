#pragma once
#include <iostream>
class Crew
{
	friend class Yacht;
public:
	Crew();
	~Crew();
	Crew(const std::string& name, int s);
	Crew(const Crew& c1);
	const std::string& getCaptainName() const;
	Crew& operator = (const Crew& c1);

private:
	std::string* captainName;
	int sailors;
};
