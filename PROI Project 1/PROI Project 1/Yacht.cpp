#include "Yacht.h"
#include <iostream>
#include "Macros.h"




Yacht::Yacht()
{
	sails = Sails(10.5, 16.5);
	DEBUG_MSG("YACHT CREATED!\n");
}

Yacht::~Yacht()
{
	DEBUG_MSG("YACHT DESTROYED!\n");
}