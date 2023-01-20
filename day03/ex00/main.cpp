#include <iostream>
#include "ClapTrap.hpp"

void printInfo(const ClapTrap &player){
    std::cout << "Name: " << player.getName() << std::endl;
    std::cout << "Hit Points " << player.getHitPoint() << std::endl;
    std::cout << "Energy Points " << player.getEnergyPoints() << std::endl;
    std::cout << "Attack damage " << player.getAttackDamage() << std::endl;
}

int main(){

  {
    ClapTrap fighterOne;
    ClapTrap fighterTwo("fightertwo", 20, 10, 1);
    ClapTrap loser("loser", 20, 30, 100);

    std::cout << std::endl;
    printInfo(fighterOne);
    std::cout << std::endl;
    printInfo(fighterTwo);
    std::cout << std::endl;
    printInfo(loser);
    
    std::cout << "--------------------------fight ----------------" << std::endl;

    fighterOne.attack(loser.getName());
    loser.takeDamage(fighterOne.getAttackDamage());
    fighterTwo.attack(loser.getName());
    loser.takeDamage(fighterTwo.getAttackDamage());
    fighterTwo.attack(fighterOne.getName());
    fighterOne.takeDamage(fighterTwo.getAttackDamage());
    fighterOne.beRepaired(30);
    loser.attack(fighterTwo.getName());
    fighterTwo.takeDamage(loser.getAttackDamage());

    std::cout << std::endl;
    printInfo(fighterOne);
    printInfo(fighterTwo);
    printInfo(loser);
    std::cout << "--------------------------the fight is finish-----------------------"<<std::endl;
  }
  {
    ClapTrap one("one");
    ClapTrap two("two");
    ClapTrap three(one);
    ClapTrap fourth;

    fourth = two;
 
    std::cout << std::endl;
    one.setHitPoints(10);
    one.setEnergyPoints(10);
    one.setAttackDamage(4);
    two.setHitPoints(10);
    two.setEnergyPoints(10);
    two.setAttackDamage(3);
    printInfo(one);
    std::cout << std::endl;
    printInfo(two); 
    std::cout << "__________________BATTLEFIELD______________________" << std::endl << std::endl;
    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(2);
    two.attack(one.getName());
    one.takeDamage(two.getAttackDamage());
    two.beRepaired(2);
    two.beRepaired(2);
    std::cout << "_________________________________________" << std::endl;
    printInfo(one);
    std::cout << std::endl;
    printInfo(two);
    std::cout << std::endl;
  }
    return (0);
}
