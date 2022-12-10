

#ifndef __BRIAN_H__
#define __BRAIN_H__
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
class Brain{
public:
    Brain(void);
    Brain(const Brain &copy);
    ~Brain(void);
    Brain& operator=(const Brain &copy);
private:
    std::string ideas[100];
};
#endif