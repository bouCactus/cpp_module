#include "HumanB.hpp"

HumanB::HumanB(){
    std::cout << "default constructor called" << std::endl;
}
HumanB::HumanB(std::string name) :
_name(name){
    std::cout << "HumanB: "<< _name << " is created" << std::endl;
}
HumanB::~HumanB(){
    std::cout << "HumanB: " << _name << " human is deleted" << std::endl;
}
void HumanB::attack(){
    if (_weapon == NULL){
        std::cout << "HumanB: " << _name << " doesn't have a weapon!" << std::endl;
        return ;
    }
    std::cout << "HumanB: " << _name << " attacks with their" << _weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &Weapon){
    this->_weapon = &Weapon;
}