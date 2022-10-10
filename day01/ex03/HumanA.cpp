#include "HumanA.hpp"


// HumanA::HumanA()
// {
// }
HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon), _name(name)
{
    std::cout << _name << " is created"<<std::endl;
}
HumanA::~HumanA()
{
    std::cout << _name << " is deleted"<<std::endl;
}
void HumanA::attack()
{
    std::cout << _name <<" attacks with their" << _weapon.getType() << std::endl;
}