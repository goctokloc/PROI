#include <iostream>
#include "Yacht.h"
#include "Crew.h"
#include "Hull.h"
#include "Sails.h"
#include "Macros.h"

int Yacht::yachtCount =0;

int main()
{	
	Hull kadlub1(3.5, 6, 5.8);
	std::cout << kadlub1[3]<<'\n';
	Yacht newYacht(kadlub1);
	Sails zagiel1(1, 1);
	Sails zagiel2(2, 2);
	Sails zagiel3 = zagiel1 + zagiel2;
	bool a = zagiel1 < zagiel2;
	Crew newCrew("John", 5);
	newYacht.setCrew(newCrew);
	Crew newCrew2;
	Crew newCrew3 = newCrew;
	Yacht newYacht2(kadlub1);
	newYacht2 = newYacht;
	std::cout << zagiel1<<'\n';
	bool b = zagiel1 == zagiel2;
	std::cout<<Yacht::getYachtCount()<<'\n';
	
}



