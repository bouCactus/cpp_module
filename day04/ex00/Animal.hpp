

#ifndef __ANIMAL_H__
#define __ANIMAL_H__
#include <iostream>

class Animal{

public:
    Animal();
    Animal(const Animal &obj);
    Animal(const std::string type);
    ~Animal();
    void setType(const std::string &type);
    std::string getType( void ) const;
    virtual void makeSound( void )const;

protected:
    std::string _type;
};

#endif