 #include <iostream>
 #include "Bird.hpp"
 using namespace std;

 Bird::Bird() :Animal()
 {
    airborne_=false;    
    aquatic_=false; 
 } // constructor
    
Bird::Bird(std::string name, bool domestic, bool predator):Animal(name, domestic, predator)
{
    airborne_=false;    
    aquatic_=false; 
}
    
bool Bird::isAirborne() const
{
    return airborne_;
}

bool Bird::isAquatic() const
{
    return aquatic_;
}

void Bird::setAirborne()
{
    airborne_=true;
    
}

void Bird::setAquatic()
{
    aquatic_=true;
}
