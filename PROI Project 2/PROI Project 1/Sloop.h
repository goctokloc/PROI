#pragma once
#include "AbstractYacht.h"

class Sloop :
	public AbstractYacht
/// klasa slupa
{
public:
	Sloop();
	Sloop(const Hull& newhull);
	Sloop(const Sloop& s1);
	Sloop& operator =(const Sloop& s1);
	double calculateDisplacement() override;
	double calculateSpeed() override;
	void print(std::ostream& out) override;
	int get_engine_power() const;
	void set_engine_power(int engine_power);


protected:
	///moc silnika w KM
	int enginePower;
};
