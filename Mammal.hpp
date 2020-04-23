#include <iostream>
#include "Animal.hpp" // All the following hpp files for the derived classes should have the base classes hpp so the compiler knows the origin and where the inheritance comes from 
#ifndef MAMMAL_H_
#define MAMMAL_H_
class Mammal : public Animal{ // this is the part that establishes inheritance, as the base class of the public functions are implemented ":"

public:
    Mammal();     
    Mammal(std::string name, bool domestic = false, bool predator = false);      
    bool hasHair() const;      
    bool isAirborne() const;     
    bool isAquatic() const;      
    bool isToothed() const;      
    bool hasFins() const;      
    bool hasTail() const;      
    int legs() const;      
    void setHair();      
    void setAirborne();      
    void setAquatic();      
    void setToothed();     
    void setFins();      
    void setTail();      
    void setLegs(int legs);

private:
    bool hair_;      
    bool airborne_;      
    bool aquatic_;      
    bool toothed_;      
    bool fins_;      
    bool tail_;      
    int legs_;
};
#endif
