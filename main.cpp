#include <iostream>
#include "Animal.hpp"// include all hpp files to make sure all the information from the other files process through implementation
#include "Fish.hpp"
#include "Bird.hpp"
#include "Mammal.hpp"
using namespace std;

int main() {
  Animal bear("Winnie The Pooh", true, true); // the bear is given the name Winnie the Pooh , domestic, and its a predator
    cout<< bear.getName() << endl; // first let the user see the name on the compiler 
    
    if (bear.isDomestic()==true){ // set conditions that show that if the animal is domestic 
        cout<<"pet"<<endl; // you have the ability to pet it 
    }
    else{
        cout<<"leave alone white ppl"<<endl; // else statement does the opposite of the first (idek why it says this...)
    }
    if (bear.isPredator()==true){ //if its a predator, run from it 
        cout<<"RUN"<<endl; //here it is!
    }
    else{
        cout<<"stop screaming"<<endl; // it just keeps getting funnier 
    }
    
    Fish Nemo("Nemo", true, false); // Nemo is a fish that is true for domestication and false for predator behavior 
    Nemo.setName("Nemo"); // name is set, so its name is Nemo 
    Nemo.setVenomous(); // the venomous function just shows that the fish is well... venomous 
    
    cout<<Nemo.getName()<<endl; // shown in the compiler 
    if (Nemo.isVenomous()==true){ // condition that says that if it is venomous  == boolean 
        cout<<"NEMO!! RUN"<<endl; // yup.... thats what you should do Nemo.
    }
    
    Bird Cinnamon("Cinnamon", true, false); // Alright, heres cinnomon, where hes domesticated and hes not a predator
    Cinnamon.setAirborne(); // he's airborne
    if (Cinnamon.isAirborne()==true){ // conditions with being airborne is that hes able to fly and escape this tedious world 
        cout<<"he free"<<endl; // exactly (cout statment in compiler)
        
        if(Cinnamon.isAquatic()==true){ // oh, hes also aquatic, which means he's able to swim 
               cout<<"swimmy bab"<<endl; // uh... okay
        }
        else{
               cout<<"he drown :("<<endl; // i bet he did 
        }
    }
    
    Mammal Buffalo("Buffalo", false, false); // a mammal that is a buffalo (not the state) and hes not domesticated or being a predator
    
    Buffalo.setHair(); // here, the coder actually tells the compiler the characteristics that are inherited for the animal being chosen
    Buffalo.setLegs(4); // four legs 
    Buffalo.setAirborne(); // he can fly
    cout<<"A buffalo might have "<< Buffalo.legs()<<" legs"<<endl; // tells the user how may legs the animal has 
    if (Buffalo.hasHair()==true){ // conditions 
        cout<<"very hairy"<<endl;
    }
    if (Buffalo.isAirborne()==true){
        cout<<"he brwakthonh"<<endl;
    }
   

  return 0; // return 
}
