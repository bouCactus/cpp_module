

#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include <iostream>
#include "ICharacter.hpp"

class Character: public ICharacter{
public:
    Character(void);
    Character(const Character &copy);
    Character(std::string name);
    ~Character(void);
    Character &operator= (const Character &copy);
private:
    std::string _name;
};


#endif