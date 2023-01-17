#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void printInfo(const DiamondTrap &player)
{
    std::cout << "Name: " << player.getName() << std::endl;
    std::cout << "Hit Points " << player.getHitPoint() << std::endl;
    std::cout << "Energy Points " << player.getEnergyPoints() << std::endl;
    std::cout << "Attack damage " << player.getAttackDamage() << std::endl;

}
void printInfo(const ClapTrap &player)
{
    std::cout << "Name: " << player.getName() << std::endl;
    std::cout << "Hit Points " << player.getHitPoint() << std::endl;
    std::cout << "Energy Points " << player.getEnergyPoints() << std::endl;
    std::cout << "Attack damage " << player.getAttackDamage() << std::endl;

}
int main()
{
    {
    DiamondTrap one;
    printInfo(one);
    one.whoAmI();
    std::cout << std::endl;
    std::cout << std::endl;
    }
    {
        DiamondTrap fighter1("fighter1");
        ScavTrap  fighter2("fighter2");
        FragTrap fighter3("fighter3");
        std::cout << "---------------------------players------------------------" << std::endl;
        printInfo(fighter1);
        std::cout << std::endl;
        printInfo(fighter2);
        std::cout << std::endl;
        printInfo(fighter3);
        std::cout << "---------------------------fight time---------------------" << std::endl;
        fighter1.attack(fighter2.getName());
        fighter2.takeDamage(fighter1.getAttackDamage());
        fighter3.attack(fighter2.getName());
        fighter2.takeDamage(fighter3.getAttackDamage());
        fighter2.beRepaired(3);
        fighter1.beRepaired(10);
        std::cout << std::endl;
        fighter1.whoAmI();
        fighter2.guardGate();
        fighter3.highFivesGuys();
        std::cout << "----------------------------the end-----------------------" << std::endl;
        printInfo(fighter1);
        std::cout << std::endl;
        printInfo(fighter2);
        std::cout << std::endl;
        printInfo(fighter3);
        std::cout << std::endl;
    }
    return (0);
}