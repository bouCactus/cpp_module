

#ifndef _CAT_H__
#define _CAT_H__
#include"Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
public:
    Cat();
    Cat(const Cat &copy);
    ~Cat();
    Cat &operator= (const Cat &copy);
    void makeSound()const;
private:
    Brain *_catBrain;

};

#endif