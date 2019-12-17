#pragma once
#include <iostream>

class Crew
/// klasa zalogi
{
public:
	Crew();
	~Crew();
	Crew(const std::string& name, int s);
	Crew(const Crew& c1);
	const std::string& getCaptainName() const;
	int getSailors(void) const;
	void setSailors(int s);
	Crew& operator =(const Crew& c1);
	friend std::ostream& operator << (std::ostream& out, const Crew& c1);
	friend std::istream& operator >> (std::istream& in, Crew& c1);
private:
	/// imie kapitana
	std::string* captainName;
	/// ilosc zalogi
	int sailors;
};
