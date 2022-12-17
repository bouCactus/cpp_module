

#ifndef _DOG_H__
#define _DOG_H__
#include"Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
public:
    Dog();
    Dog(const Dog &copy);
    ~Dog();
    Dog &operator= (const Dog &copy);
    void makeSound(void);
private:
    Brain *_dogBrain;

};

#endif