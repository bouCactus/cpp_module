/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:58:45 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/18 08:15:29 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void){
    ClapTrap::_name += "_clap_name";
	this->_name = "Noname";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
    this->_hitPointsCapacity = FragTrap::_hitPoints;
   std::cout << "DiamondTrap defualt constructor called" << _hitPoints << ' ' << _energyPoints << ' ' << _attackDamage  << std::endl;
}

DiamondTrap::DiamondTrap(std::string name){
    ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
    this->_hitPointsCapacity = FragTrap::_hitPoints;
    std::cout << "DiamondTrap paramiteraze constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap::~DiamondTrap(void){
    std::cout << "DiamondTrap distructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy){
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
     if (this !=  &copy)
    {
       ClapTrap::operator=(copy);
    }
    return (*this);
}

void DiamondTrap::whoAmI(void){
    std::cout << "DiamondTrap name: \"" << _name << "\" ClapTrap name: \"" << ClapTrap::_name << "\""<< std::endl;
}

void DiamondTrap::setName(const std::string name){
    this->_name = name;
}

std::string DiamondTrap::getName(void) const{
    return (_name);
}

unsigned int DiamondTrap::getHitPoint(void)const{
    return (_hitPoints);
}

unsigned int DiamondTrap::getEnergyPoints(void) const{
    return (_energyPoints);
}

unsigned int DiamondTrap::getAttackDamage(void) const{
    return (_attackDamage);
}

void DiamondTrap::setHitPoints(unsigned int points){
    _hitPoints = points;
    _hitPointsCapacity = points;
}
void DiamondTrap::setEnergyPoints(unsigned int points){
    _energyPoints = points;
}
void DiamondTrap::setAttackDamage(unsigned int amount){
    _attackDamage = amount;
}



