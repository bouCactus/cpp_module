#include "HumanB.hpp"

HumanB::HumanB()
{
}
HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << _name << " is created" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << _name << "human is deleted" << std::endl;
}
void HumanB::attack()
{
    std::cout << _name << " attacks with their" << _weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &Weapon)
{
    _weapon = &Weapon;
}