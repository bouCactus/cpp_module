

#ifndef _DOG_H__
#define _DOG_H__
#include"Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
public:
    Dog(void);
    Dog(const Dog &copy);
    ~Dog(void);
    Dog &operator= (const Dog &copy);
    void makeSound()const;
private:
    Brain *_dogBrain;

};

#endif