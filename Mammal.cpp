 #include <iostream>
 #include "Mammal.hpp" // For every derived classes hpp, they should be included with the matching cpp files 
 using namespace std;

Mammal::Mammal(): Animal() 
{
    hair_=false;
    airborne_=false;      
    aquatic_=false;      
    toothed_=false;      
    fins_=false;      
    tail_=false;      
    legs_=0;
} //constructor
    
Mammal::Mammal(std::string name, bool domestic, bool predator) : Animal(name, domestic, predator)
{
    hair_=false;
    airborne_=false;      
    aquatic_=false;      
    toothed_=false;      
    fins_=false;      
    tail_=false;      
    legs_=0;
}

bool Mammal::hasHair() const 
{
    return hair_;
}  

bool Mammal::isAirborne() const
{
    return airborne_;
}     

bool Mammal::isAquatic() const
{
    return aquatic_;
}   

bool Mammal::isToothed() const
{
    return toothed_;
}      

bool Mammal::hasFins() const 
{
    return fins_;
}     
    
bool Mammal::hasTail() const 
{
    return tail_;
}     
    
int Mammal::legs() const
{
    return legs_;
}      
   
void Mammal::setHair()
{
    hair_=true;
}      

void Mammal::setAirborne() 
{
    airborne_=true;
}    

void Mammal::setAquatic()
{
    aquatic_=true;
} 

void Mammal::setToothed()
{
    toothed_=true;
}  

void Mammal::setFins() 
{
    fins_=true;
    
}

void Mammal::setTail()
{
    tail_=true;
}   

void Mammal::setLegs(int legs)
{
    legs_ = legs;
}
