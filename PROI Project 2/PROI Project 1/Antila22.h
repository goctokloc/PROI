#pragma once
#include "Sloop.h"
class Antila22 :
	public Sloop
///klasa jachtu antilla22
{
public:
	Antila22();
	void setCrew(const Crew& newCrew) override;
	Antila22& operator =(const Antila22& a1);
	double calculateDisplacement() override;
	double calculateSpeed() override;
	void print(std::ostream& out) override;
};

