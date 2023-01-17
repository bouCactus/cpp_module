#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void):
ClapTrap(){
  std::cout << "FragTrap: Deflaut constructor called" << std::endl;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  this->_hitPointsCapacity = 100;
}

FragTrap::~FragTrap(void){
  std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy){
  std::cout << "FragTrap: Copy constructor called" << std::endl;
  *this = copy;
}

FragTrap::FragTrap(const std::string name):
ClapTrap(){
  std::cout << "FragTrap: Copy parameterized constructor called "<< std::endl;
  this->_name = name;
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  this->_hitPointsCapacity = 100;
}
FragTrap::FragTrap(const std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage){
  std::cout << "FragTrap: parameterized constructor called" << std::endl;
  this->_name = name;
  this->_hitPoints = hitPoints;
  this->_energyPoints = energyPoints;
  this->_attackDamage = attackDamage;
  this->_hitPointsCapacity = hitPoints;
}
FragTrap &FragTrap::operator= (const FragTrap & copy){
  std::cout << "FragTrap: Copy assignment operator called" << std::endl;
  if (this !=  &copy){
    ClapTrap::operator=(copy);
  }
  return (*this);
}

void FragTrap::highFivesGuys(void){
  std::cout << "FragTrap: high fives guys!" << std::endl;
}
