#include <iostream>
#ifndef ANIMAL_H_ // "if not defined"
//when having these defined, it makes sure the repetition of class names are not occuring as an error and keeps things in track
#define ANIMAL_H_ // "then define as such"
class Animal
{
public:
    Animal(); // constructor
    Animal(std::string name, bool domestic = false, bool predator = false); // default constructor 
    std::string getName() const;   
    bool isDomestic() const;      
    bool isPredator() const;     
    void setName(std::string name);      
    void setDomestic();      
    void setPredator();

private:
    std::string name_; 
    bool domestic_; //since this is set as a boolean, there is a given false and true statement that needs to be stated by the user ()
    bool predator_; //
};
#endif //"end the definition here"



 
 