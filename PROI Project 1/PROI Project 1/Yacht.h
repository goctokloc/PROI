#pragma once
#include "Crew.h"
#include "Hull.h"
#include "Sails.h"
class Yacht
{
public:
	Yacht();
	~Yacht();

private:
	Hull hull;
	Crew crew;
	Sails sails;

};
