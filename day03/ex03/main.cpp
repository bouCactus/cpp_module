#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void printInfo(const ClapTrap &player)
{
    std::cout << "Name: " << player.getName() << std::endl;
    std::cout << "Hit Points " << player.getHitPoint() << std::endl;
    std::cout << "Energy Points " << player.getEnergyPoints() << std::endl;
    std::cout << "Attack damage " << player.getAttackDamage() << std::endl;

}
int main()
{
//    ClapTrap one("one");
//    ClapTrap three(one);
//    ClapTrap two("two");
//    ClapTrap fourth;
//    ScavTrap ready("test");
//    FragTrap set;
//    ScavTrap go;

//    fourth = two;

//     std::cout << std::endl;
//     one.setHitPoints(10);
//     one.setEnergyPoints(10);
//     one.setAttackDamage(4);
//     two.setHitPoints(10);
//     two.setEnergyPoints(10);
//     two.setAttackDamage(3);
//      printInfo(one);
//     std::cout << std::endl;
//     printInfo(two);
//     printInfo(ready);
//     std::cout << "__________________BATTLEFIELD______________________" << std::endl << std::endl;
//     one.attack(two.getName());
//     two.takeDamage(one.getAttackDamage());
//     two.beRepaired(2);
//     two.attack(one.getName());
//     one.takeDamage(two.getAttackDamage());
//     two.beRepaired(2);
//     two.beRepaired(2);
//     ready.guardGate();
//     set.highFivesGuys();
//     std::cout << "_________________________________________" << std::endl;
//     printInfo(one);
//     std::cout << std::endl;
//     printInfo(two);
//     std::cout << std::endl;

DiamondTrap ayoub("ayoub");
ayoub.setName("cat");
ayoub.ClapTrap::setName("Dog");
ClapTrap *p = new DiamondTrap("cow");

printInfo(ayoub);
std::cout << "eng" << ayoub.getAttackDamage() << std::endl;
    
    ayoub.whoAmI();
    std::cout << "name ::" << p->getName() << std::endl;
    std::cout << "naem two:: " << p->ClapTrap::getName() << std::endl;
    return (0);
}