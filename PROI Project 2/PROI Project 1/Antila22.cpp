#include "Antila22.h"

Antila22::Antila22() :Sloop()
{
	/// \return obiekt Antila22
	Hull newhull(7.6, 1.35, 1500);
	Sails newsails(5.775, 4);
	this->hull = newhull;
	this->setSails(newsails);
	this-> set_engine_power(8);
}
void Antila22::setCrew(const Crew& newCrew)
{
	/// \param obiekt Crew
	AbstractYacht::setCrew(newCrew);
	if (crew->getSailors() > 6)
	{
		crew->setSailors(6);
		std::cout << "Sailor number extended, setting number of sailors as 6.\n";
	}
}
double Antila22::calculateDisplacement()
{
	/// \return double wypornosc  w kg
	double waterline = hull.getDraft() * (0.6 + 0.033 * crew->getSailors());
	return 1025 * hull.getLengthOverall() * 0.2 * hull.getLengthOverall() * waterline;
}
double Antila22::calculateSpeed()
{
	//// \return double predkosc w wezlach
	return 4 + 0.45 * double(sails) - 0.0008 * this->calculateDisplacement() + 0.2 * enginePower;
}
void Antila22::print(std::ostream& out)
{
	///zapis do pliku
	//// \return strumien wyjsciowy out
	out << *this <<  this->enginePower << std::endl;
}





