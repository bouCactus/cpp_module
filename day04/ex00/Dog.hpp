

#ifndef _DOG_H__
#define _DOG_H__
#include"Animal.hpp"

class Dog: public Animal{
public:
    Dog();
    ~Dog();
    void makeSound()const;

};

#endif