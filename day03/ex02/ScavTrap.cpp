/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:58:33 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/18 07:58:34 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void):
ClapTrap(){
     std::cout << "ScavTrap: deflaut constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap: Destcurtor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy){
     std::cout << "ScavTrap: Copy constructor called" << std::endl;
     *this = copy;
}

ScavTrap::ScavTrap(const std::string name):
ClapTrap(name){
  std::cout << "ScavTrap: parameterized constructor constructor called" << std::endl;
  this->_name = name; 
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}
ScavTrap::ScavTrap(const std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage){
  std::cout << "ScavTrap: parameterized constructor called" << std::endl;
  this->_name = name; 
  this->_hitPoints = hitPoints;
  this->_energyPoints = energyPoints;
  this->_attackDamage = attackDamage;
}
ScavTrap &ScavTrap::operator= (const ScavTrap & copy){
  std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
  if (this !=  &copy){
      ClapTrap::operator=(copy);
  }
  return (*this);
}

void ScavTrap::attack(const std::string &traget){
    if (_energyPoints == 0 || _hitPoints == 0){
      std::cout << "ScavTrap " << _name << " can't do anything" << std::endl
		<< "Energy is " << _energyPoints << std::endl << "Hit points is "
		<< _hitPoints << std::endl;
    }
    std::cout << "ScavTrap " << _name << " attacks " << traget
	      << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap: is now in Gate keeper mode" << std::endl;
}
