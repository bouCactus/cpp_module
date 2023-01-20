/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:57:46 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/18 07:57:47 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printInfo(const ClapTrap &player)
{
    std::cout << "Name: " << player.getName() << std::endl;
    std::cout << "Hit Points " << player.getHitPoint() << std::endl;
    std::cout << "Energy Points " << player.getEnergyPoints() << std::endl;
    std::cout << "Attack damage " << player.getAttackDamage() << std::endl;

}
int main()
{
   ClapTrap one("one");
   ClapTrap two("two");
   ClapTrap three(one);
   ScavTrap fourth;
   ScavTrap ready("test");
   ScavTrap go;

   fourth = ready;

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
    printInfo(ready);
    std::cout << "__________________BATTLEFIELD______________________" << std::endl << std::endl;
    one.attack(two.getName());
    two.takeDamage(one.getAttackDamage());
    two.beRepaired(2);
    two.attack(one.getName());
    one.takeDamage(two.getAttackDamage());
    two.beRepaired(2);
    two.beRepaired(2);
    ready.guardGate();
    std::cout << "_________________________________________" << std::endl;
    printInfo(one);
    std::cout << std::endl;
    printInfo(two);
    std::cout << std::endl;
    printInfo(fourth);
    return (0);
}
