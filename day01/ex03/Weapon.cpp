#include<iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{
}
Weapon::Weapon(std::string type):_type(type)
{
    std::cout << _type << "is created" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << _type << "is deleted" << std::endl;
}
std::string const &Weapon::getType() const
{
    return (_type);
}
void Weapon::setType(std::string type)
{
    _type = type;
}