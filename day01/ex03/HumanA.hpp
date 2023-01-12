#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();

private:
    Weapon &_weapon;
    std::string _name;
};
#endif // _HUMANA_H_