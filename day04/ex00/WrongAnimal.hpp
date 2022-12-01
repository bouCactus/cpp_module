


#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__
#include "Animal.hpp"

class WrongAnimal : public Animal{

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal & obj);
    ~WrongAnimal();
    void makeSound();     
};
#endif