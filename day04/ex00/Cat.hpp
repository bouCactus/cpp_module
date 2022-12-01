

#ifndef _CAT_H__
#define _CAT_H__
#include"Animal.hpp"

class Cat: public Animal{
public:
    Cat();
    Cat(const Cat & obj);
    ~Cat();
    void makeSound()const;

};

#endif