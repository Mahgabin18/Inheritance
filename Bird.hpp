#include <iostream>
#include "Animal.hpp"
#ifndef BIRD_H_ // for all the following derived classes that have its own cpp and hpp, to not confuse the compiler with the same files being used repeatedly, just define it for each individual class
#define BIRD_H_

class Bird : public Animal
{
    public: 
    Bird();      
    Bird(std::string name, bool domestic = false, bool predator = false);      
    bool isAirborne() const;      
    bool isAquatic() const; 
    void setAirborne();   
    void setAquatic(); 

    private:
    bool airborne_;      
    bool aquatic_;   
};
#endif
