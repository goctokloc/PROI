#pragma once
#include "AbstractYacht.h"
#include <iostream>
#include <fstream>

class Catamaran :
	public AbstractYacht
///klasa katamaranu
{
public:
	Catamaran();
	Catamaran(const Hull& newHull);
	Catamaran(const Catamaran& c1);
	Catamaran& operator =(const Catamaran& c1);
	double calculateDisplacement() override;
	double calculateSpeed() override;
	void setCrew(const Crew& newCrew) override;
	void print(std::ostream& out) override;
	
private:
	/// tablica kadlubow
	Hull hulls[2]; 
};
