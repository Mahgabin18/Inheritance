#include <iostream>
#include <string>
#include "Animal.hpp" // when making inheritance, make sure to include the HPP files in order for the cpp files to understand where its coming from
using namespace std;

Animal::Animal() // this is the BASE CLASS == the first class that the derived classes inherit from and get the source of first information from
{
    name_= ""; 
    domestic_=false;
    predator_=false;
// this is a defaulted parameter that sets everything to the value that would be automatically initialized if the user doesnt put any values in main or compiler (cin) == if you just put Animal Dog ("Dog"), it would still compile because it has defaulted values that set both parameters to false and keeps it running. Neat.
} //constuctor

Animal::Animal(std::string name, bool domestic , bool predator) //default constructor (initializes the variables)
{
    name_= name;
    domestic_=domestic;
    predator_=predator;
// IMPORTANT NOTE: this is where the variables from the parametes that were initalized with their type are matched perfectly with their private variables
}

std::string Animal::getName() const //gets the name and returns it (NOTE: std is used when namespace isnt being used :) )
{
    return name_;
}
 
bool Animal::isDomestic() const //the private variable domestic is returned in the is function
{
    return domestic_;
}     
   
bool Animal::isPredator() const //the private variable predator is returned in the is function
{
    return predator_;
}

void Animal::setName(std::string name) //when setting the name, set it with its matching private variable 
{
    name_=name;
}  

void Animal::setDomestic() // just sets the variable in the private section to be true 
{
    domestic_=true;
}      

void Animal::setPredator() //same 
{
    predator_=true;
}
