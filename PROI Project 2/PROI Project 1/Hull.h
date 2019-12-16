#pragma once
class Hull
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

private:
	double lengthOverall;
	double draft;
	double tonnage;
};
