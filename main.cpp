#include <iostream>

#ifdef _DEBUG
#define DEBUG_MSG(x) std::cout << x;
#else
#define DEBUG_MSG(x) 
#endif 


using namespace std;

class Yacht
{
private:
    Kadlub kadlub;
    Zagiel zagiel;
    Zaloga zaloga;
    static int yachtCount;
public:
    static int GetYachtCount()
    {
        return yachtCount;        
    }
    void AddNewElement(YachtElement element)
    {
        elements[elementCount] = element;
        elementCount++;
    }
    
    // Yacht(Yacht* yacht){
    //     this->kadlub = yacht->kadlub;
    //     yachtCount++
    // }

    Yacht(/* args */)
    {
        yachtCount++;
        // elements = new YachtElement[];
    };
    ~Yacht(){
    //   delete elements;  
    };
};

Yacht::Yacht(int yachtNumber, string name, string color)
{
    DEBUG_MSG("YACHT CREATED " + yachtNumber);
}

Yacht::~Yacht()
{
    #ifdef _DEBUG
        cout<<"YACHT CREATED";
    #endif
}

class Zagiel
{
private:
    /* data */
public:
    Zagiel(/* args */);
    ~Zagiel();
};

Zagiel::Zagiel(/* args */)
{
    #ifdef _DEBUG
        cout<<"YACHT CREATED";
    #endif
    
    
    cout << "początek";
}

Zagiel::~Zagiel()
{
    cout << "koniec";
}

void main()
{
    Yacht* yachtRef = new Yacht();
    Yacht* yachtRefCopy = yachtRef;

    yachtRefCopy->name = "NAME";
    yachtRef->name = "DUPA";

    cout << yachtRefCopy->name; //DUPA

    int yachtCount = 0;
    Yacht yacht1 = Yacht(1);
    Yacht yacht2 = Yacht(2);
    Yacht yacht3 = Yacht(3);

    int yachts = Yacht::GetYachtCount();
    Yacht.GetYachtCount();
    
    yachtCount = 3;

}