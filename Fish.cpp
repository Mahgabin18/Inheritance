 #include <iostream>
 #include "Fish.hpp"
 using namespace std;
 
 Fish::Fish(): Animal()
 {
 }

Fish::Fish(std::string name, bool domestic, bool predator):Animal(name,domestic,predator)
{
}

bool Fish::isVenomous() const 
{ 
    return venomous_;
}     

void Fish::setVenomous()
{
    venomous_=true; 
}
