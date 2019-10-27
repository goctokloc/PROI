
#include "Yacht.h";
#include "Macros.h";

int Yacht::GetYachtCount()
{
    return yachtCount;        
}
void Yacht::AddNewElement(YachtElement element)
{
    elements[elementCount] = element;
    elementCount++;
}

Yacht::Yacht(Yacht* yacht){
    this->kadlub = yacht->kadlub;
    yachtCount++
}

Yacht::Yacht(int yachtNumber, string name, string color)
{
DEBUG_MSG("YACHT CREATED " + yachtNumber);

    yachtCount++;
    #ifdef _DEBUG
        cout<<"YACHT CREATED";
    #endif
};
Yacht::~Yacht(){
};
