#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
_weapon(weapon),
_name(name){
    std::cout << "HumanA: " << _name << " is created"<<std::endl;
}

HumanA::~HumanA(){
    std::cout << "HumanA: " << _name << " is deleted"<<std::endl;
}

void HumanA::attack(){
    std::cout << "HumanA: " << _name <<" attacks with their " << _weapon.getType() << std::endl;
}