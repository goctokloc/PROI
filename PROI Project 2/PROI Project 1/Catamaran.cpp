#include "Catamaran.h"

Catamaran::Catamaran() :AbstractYacht()
{
	/// \return obiekt Catamaran
}

Catamaran::Catamaran(const Hull& newHull) : AbstractYacht(newHull)
{
	/// \param obiekt Hull
	/// \return obiekt Catamaran
	hulls[0] = newHull;
	hulls[1] = newHull;
	
}

Catamaran::Catamaran(const Catamaran& c1) : AbstractYacht(c1)
{
	/// \param obiekt Catamaran
	/// \return obiekt Catamaran
	hulls[0] = c1.hulls[0];
	hulls[1] = c1.hulls[1];
}


double Catamaran::calculateDisplacement()
{
	/// \return double wypornosc  w kg
	double waterline = hulls[0].getDraft() * (0.8 + 0.025 * crew->getSailors());
	return 1025 * hulls[0].getLengthOverall() * 0.1 * hulls[0].getLengthOverall() * waterline * 2;
}

double Catamaran::calculateSpeed()
{
	//// \return double predkosc w wezlach
	return 8+0.2*double(sails)-0.00005*this->calculateDisplacement();
}

void Catamaran::setCrew(const Crew& newCrew)
{
	/// \param obiekt Crew
	
	AbstractYacht::setCrew(newCrew);
	if (crew->getSailors() > 8)
	{
		crew->setSailors(8);
		std::cout << "Sailor number extended, setting number of sailors as 8.\n";
	}
}
void Catamaran::print(std::ostream& out)
{
	///zapis do pliku
	//// \return strumien wyjsciowy out
	out << *this <<  this->hulls[0] << "\n" << this->hulls[1] << std::endl;
	
}


