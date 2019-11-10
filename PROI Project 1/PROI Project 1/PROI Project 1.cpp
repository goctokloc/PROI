#include <iostream>
#include "Yacht.h"
#include "Crew.h"
#include "Hull.h"
#include "Sails.h"
#include "Macros.h"

int Yacht::yachtCount = 0;

void testingFunction()
{
	//HULL TEST

	Hull hull1(3.5, 6, 5.8);
	Hull hull2(5.6, 8, 10.);

	//SAILS TEST

	Sails sail1(1, 1);
	Sails sail2(2, 2);

	//CREW TEST

	Crew crew1("John", 5);
	Crew crew2 = crew1;
	std::cout << crew2.getCaptainName() << '\n';

	//YACHT TEST

	Yacht yacht1(hull1);
	yacht1.setCrew(crew1);
	yacht1.setSails(sail1);
	Hull hull4 = yacht1.getHull();
	Crew crew4 = yacht1.getCrew();
	Sails sail5 = yacht1.getSails();
	Yacht yacht2(hull2);
	Yacht yacht3 = yacht1;
	std::cout << Yacht::getYachtCount() << '\n';

}

void operatorTest()
{
	//HULL OPERATORS
	Hull hull1(3.5, 6, 5.8);
	Hull hull2(5.6, 8, 10.);

	bool a = hull1 > hull2;
	bool b = hull1 < hull2;
	bool c = hull1 == hull2;
	bool d = hull1 != hull2;
	std::cout << hull2[3] << '\n';

	//SAILS OPERATORS
	Sails sail1(1, 1);
	Sails sail2(2, 2);
	Sails sail3;
	Sails sail4;
	
	sail3 = sail1 - sail2;
	sail4 = sail1 + sail2;
	bool e = sail2 > sail1;
	bool f = sail1 < sail2;
	double g = double(sail1);

	//CREW OPERATORS
	Crew crew1("John", 5);
	Crew crew2;

	crew2 = crew1;

	//YACHT OPERATORS
	Yacht yacht1(hull1);
	Yacht yacht2(hull2);

	yacht2 = yacht1;
}

int main()
{
	testingFunction();
	DEBUG_OPERATOR_TEST

	return 0;
}



