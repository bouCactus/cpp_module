

#ifndef _DOG_H__
#define _DOG_H__
#include"Animal.hpp"

class Dog: public Animal{
public:
    Dog(void);
    Dog(const Dog &obj);
    ~Dog(void);

    Dog &operator= (const Dog &copy);
    void makeSound()const;

};

#endif