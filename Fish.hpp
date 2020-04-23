#include <iostream>
#include "Animal.hpp"
#ifndef FISH_H_ // these are safe guards
#define FISH_H_

class Fish : public Animal
{
public:
    Fish();     
    Fish(std::string name, bool domestic = false, bool predator = false);   
    bool isVenomous() const;     
    void setVenomous(); 

private:
    bool venomous_;
};
#endif