

#ifndef _CAT_H__
#define _CAT_H__
#include"Animal.hpp"

class Cat: public Animal{
public:
    Cat(void);
    Cat(const Cat & copy);
    ~Cat(void);
    Cat &operator= (const Cat &copy);
    void makeSound()const;
};

#endif