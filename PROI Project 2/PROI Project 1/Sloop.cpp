#include "Sloop.h"
Sloop::Sloop() : AbstractYacht()
{
	
	/// \return obiekt Sloop
}
Sloop::Sloop(const Hull& newhull) : AbstractYacht(newhull)
{
	/// \param obiekt Hull
	/// \return obiekt Sloop
}
void Sloop::set_engine_power(int engine_power)
{
	/// \param int moc silnika w KM
	
	enginePower = engine_power;
}

int Sloop::get_engine_power() const
{
	/// \return int moc silnika w KM
	return enginePower;
}


double Sloop::calculateDisplacement()
{
	/// \return double wypornosc  w kg
	double waterline = hull.getDraft() * (0.6 + 0.033 * crew->getSailors());
	return 1025 * hull.getLengthOverall() * 0.2 * hull.getLengthOverall() * waterline ;
}

double Sloop::calculateSpeed()
{
	//// \return double predkosc w wezlach
	return 4 + 0.25 * double(sails) - 0.0001 * this->calculateDisplacement() +0.1*enginePower;
}

void Sloop::print(std::ostream& out)
{
	///zapis do pliku
	//// \return strumien wyjsciowy out
	out << *this <<  this->enginePower << std::endl;
}


