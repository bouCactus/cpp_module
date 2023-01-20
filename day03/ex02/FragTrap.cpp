/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:58:09 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/18 07:58:10 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void):
ClapTrap(){
  std::cout << "FragTrap: Deflaut constructor called" << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::~FragTrap(void){
  std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy){
  std::cout << "FragTrap: Copy constructor called" << std::endl;
  *this = copy;
}

FragTrap::FragTrap(const std::string name):
ClapTrap(name){
  std::cout << "FragTrap: Copy parameterized constructor called "<< std::endl;
   this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}
FragTrap::FragTrap(const std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage){
  std::cout << "FragTrap: parameterized constructor called" << std::endl;
  this->_name = name;
  this->_hitPoints = hitPoints;
  this->_energyPoints = energyPoints;
  this->_attackDamage = attackDamage;
}
FragTrap &FragTrap::operator= (const FragTrap & copy){
  std::cout << "FragTrap: Copy assignment operator called" << std::endl;
  if (this !=  &copy){
    ClapTrap::operator=(copy);
  }
  return (*this);
}

void FragTrap::attack(const std::string &traget){
  if (_energyPoints == 0 || _hitPoints == 0){
    std::cout << "FragTrap: " << _name << " can't do anything" << std::endl
	      << "Energy is " << _energyPoints << std::endl << "Hit points is "
	      << _hitPoints << std::endl;
  }
  std::cout << "FragTrap: " << _name << " attacks " << traget
	    << ", causing " << _attackDamage << " points of damage!" << std::endl;
  _energyPoints--;
}
void FragTrap::highFivesGuys(void){
  std::cout << "FragTrap: high fives guys!" << std::endl;
}
