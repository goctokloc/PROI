#pragma once
#include <iostream>
#include <string>


class Hull
///klasa kadluba
{
public:
	Hull();
	Hull(double lo, double d, double t);
	~Hull();
	double& operator [](size_t idx);
	Hull operator +(const Hull& param) = delete; // blokada mo퓄iwo쐁i u퓓cia operatora
	Hull operator -(const Hull& param) = delete; // blokada mo퓄iwo쐁i u퓓cia operatora
	double getDraft(void) const;
	double getLengthOverall(void) const;
	friend bool operator >(const Hull& s1, const Hull& s2);
	friend bool operator <(const Hull& s1, const Hull& s2);
	friend bool operator ==(const Hull& h1, const Hull& h2);
	friend bool operator !=(const Hull& h1, const Hull& h2);
	friend std::ostream& operator << (std::ostream& out, const Hull& h1);
	friend std::istream& operator >> (std::istream& in, Hull& h1);
	

private:
	///dlugosc calkowita
	double lengthOverall;
	///zanurzenie z pelnym zaladunkiem
	double draft;
	///tonaz
	double tonnage;
};
