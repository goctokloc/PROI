#include <iostream>
#include "AbstractYacht.h"
#include"Catamaran.h"
#include "Sloop.h"
#include "Antila22.h"
#include "Yacht.h"
#include "Crew.h"
#include "Hull.h"
#include "Sails.h"
#include "Macros.h"


// void testingFunction()
// {
// 	//HULL TEST
//
// 	Hull hull1(3.5, 6, 5.8);
// 	Hull hull2(5.6, 8, 10.);
//
// 	//SAILS TEST
//
// 	Sails sail1(1, 1);
// 	Sails sail2(2, 2);
//
// 	//CREW TEST
//
// 	Crew crew1("John", 5);
// 	Crew crew2 = crew1;
// 	std::cout << "crew2 captain's name: " << crew2.getCaptainName() << '\n';
//
// 	//YACHT TEST
//
// 	Yacht yacht1(hull1);
// 	yacht1.setCrew(crew1);
// 	yacht1.setSails(sail1);
// 	Hull hull4 = yacht1.getHull();
// 	Crew crew4 = yacht1.getCrew();
// 	Sails sail5 = yacht1.getSails();
// 	Yacht yacht2(hull2);
// 	Yacht yacht3 = yacht2;
// 	std::cout << "number of yachts created: " << Yacht::getYachtCount() << '\n';
// }

// void operatorTest()
// {
// 	//HULL OPERATORS
// 	Hull hull1(3.5, 6, 5.8);
// 	Hull hull2(5.6, 8, 10.);
//
// 	bool a = hull1 > hull2;
// 	bool b = hull1 < hull2;
// 	bool c = hull1 == hull2;
// 	bool d = hull1 != hull2;
// 	std::cout << hull2[3] << '\n';
// 	std::cout << "hull1 > hull2: " << a << " (expected:  false)\n";
// 	std::cout << "hull1 < hull2: " << b << " (expected:  true)\n";
// 	std::cout << "hull1 == hull2: " << c << " (expected:  false)\n";
// 	std::cout << "hull1 != hull2: " << d << " (expected:  true)\n";
//
// 	//SAILS OPERATORS
// 	Sails sail1(1, 1);
// 	Sails sail2(2, 2);
// 	Sails sail3;
// 	Sails sail4;
//
// 	sail3 = sail1 - sail2;
// 	sail4 = sail1 + sail2;
// 	bool e = sail1 > sail2;
// 	bool f = sail1 < sail2;
// 	double g = double(sail2);
// 	std::cout << "sail1 > sail2: " << e << " (expected:  false)\n";
// 	std::cout << "sail1 < sail2: " << f << " (expected:  true)\n";
// 	std::cout << "double(sail2): " << g << " (expected:  4)\n";
//
// 	//CREW OPERATORS
// 	Crew crew1("John", 5);
// 	Crew crew2;
//
// 	crew2 = crew1;
//
// 	//YACHT OPERATORS
// 	Yacht yacht1(hull1);
// 	Yacht yacht2(hull2);
//
// 	yacht2 = yacht1;
// }
//
//
void polyTest()
{
	Hull hull1(10, 1, 2000);
	Crew crew1("John", 9);
	Sails sail1(5, 4);
	Catamaran catamaran(hull1);
	Sloop sloop(hull1);
	Antila22 a1;
	catamaran.setCrew(crew1);
	catamaran.setSails(sail1);
	sloop.setCrew(crew1);
	sloop.setSails(sail1);
	a1.setCrew(crew1);
	AbstractYacht* arr[3];
	arr[0] = &catamaran;
	arr[1] = &sloop;
	arr[2] = &a1;
	std::cout << arr[0]->calculateDisplacement() << '\n';
	std::cout << arr[1]->calculateDisplacement() << '\n';
	std::cout << arr[2]->calculateDisplacement() << '\n';
	std::cout << arr[0]->calculateSpeed() << '\n';
	std::cout << arr[1]->calculateSpeed() << '\n';
	std::cout << arr[2]->calculateSpeed() << '\n';
}

void printTest()
{
	Hull hull1(10, 1, 2000);
	Crew crew1("John", 9);
	Sails sail1(5, 4);
	Catamaran catamaran(hull1);
	Sloop sloop(hull1);
	Antila22 a1;
	catamaran.setCrew(crew1);
	catamaran.setSails(sail1);
	sloop.setCrew(crew1);
	sloop.setSails(sail1);
	sloop.set_engine_power(8);
	a1.setCrew(crew1);

	std::ofstream out1("catamaran.txt");
	std::ofstream out2("sloop.txt");
	std::ofstream out3("antila.txt");

	catamaran.print(out1);
	sloop.print(out2);
	a1.print(out3);
}

int main()
{
	// 	for (int i = 0; i < 1000; i++)
	// 	{
	// 		testingFunction();
	// #ifdef _DEBUG
	// 		operatorTest();
	// #endif
	// 	}

	/*
	Hull hull1(10, 1, 100);
	std::ofstream out("hull.txt");
	out << hull1;
	Crew crew1("John", 9);
	std::ofstream out1("crew.txt");
	out1 << crew1;
	Sails sail1(2, 2);
	Catamaran catamaran1(hull1);
	Sloop sloop(hull1);
	catamaran1.setCrew(crew1);
	sloop.setCrew(crew1);
	sloop.setSails(sail1);
	sloop.set_engine_power(8);
	sloop.calculateDisplacement();
	sloop.calculateSpeed();
	catamaran1.setSails(sail1);
	Catamaran catamaran2;
	catamaran1.calculateDisplacement();
	catamaran1.calculateSpeed();
	std::ifstream in("hull.txt");
	std::ifstream in1("crew.txt");
	Hull hull2;
	in >> hull2;
	Crew crew2;
	in1 >> crew2;
	std::ofstream out2("catamaran.txt");
	out2 << catamaran1;
	std::ifstream in2("catamaran.txt");
	//std::cout << catamaran1;
	catamaran1.print(out2);
	*/
	polyTest();
	printTest();


	return 0;
}
