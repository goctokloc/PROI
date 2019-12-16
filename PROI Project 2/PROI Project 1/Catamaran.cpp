#include "Catamaran.h"

Catamaran::Catamaran(const Hull& newHull) : AbstractYacht(newHull)
{
	hulls[0] = newHull;
	hulls[1] = newHull;
	// if (crew->getSailors() > 8)
	// {
	// 	crew->setSailors(8);
	// 	std::cout << "Sailor number extended, setting number of sailors as 8.";
	// }
}

Catamaran::Catamaran(const Catamaran& c1) : AbstractYacht(c1)
{
	hulls[0] = c1.hulls[0];
	hulls[1] = c1.hulls[1];
}

double Catamaran::calculateDisplacement()
{
	double waterline = hulls[0].getDraft() * (0.8 + 0.025 * crew->getSailors());
	return 1025 * hulls[0].getLengthOverall() * 0.1 * hulls[0].getLengthOverall() * waterline * 2;
}

double Catamaran::calculateSpeed()
{
	return 1;
}

void Catamaran::setCrew(const Crew& newCrew)
{
	AbstractYacht::setCrew(newCrew);
	if (crew->getSailors() > 8)
	{
		crew->setSailors(8);
		std::cout << "Sailor number extended, setting number of sailors as 8.\n";
	}
}
