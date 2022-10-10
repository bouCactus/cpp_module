#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public: 

/* 
    should remove the consturctor because the weapon is a pointer
    and in none parameterized constructor compiler said 
    "must explicitly initialize the reference member "
*/
    HumanA();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
private:
    Weapon &_weapon;
    std::string _name;

};
#endif