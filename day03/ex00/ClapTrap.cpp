#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
  _name("noName"),
  _hitPoints(10),
  _energyPoints(10),
  _attackDamage(0),
  _hitPointsCapacity(10){
    std::cout << "ClapTrap: Deflaut constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::ClapTrap(const std::string name) :
  _name(name),
  _hitPoints(10),
  _energyPoints(10),
  _attackDamage(0),
  _hitPointsCapacity(10){
    std::cout << "ClapTrap: parameterized constructor called" << std::endl;
  }
ClapTrap::ClapTrap(const std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage):
  _name(name),
  _hitPoints(hitPoints),
  _energyPoints(energyPoints),
  _attackDamage(attackDamage),
  _hitPointsCapacity(hitPoints){
    std::cout << "ClapTrap: parameterized constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy){
    std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
    if (this !=  &copy){
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
	    this->_hitPointsCapacity = copy._hitPointsCapacity;
    }
    return (*this);
}

void ClapTrap::attack(const std::string &traget){
    if (_energyPoints == 0 || _hitPoints == 0){
        std::cout << "ClapTrap " << _name << " can't do anything" << std::endl
        << "Energy is " << _energyPoints << std::endl << "Hit points is "
        << _hitPoints << std::endl;
    }
    std::cout << "ClapTrap " << _name << " attacks " << traget
    << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(const unsigned int amount){
  if ((int)_hitPoints - (int)amount < 0 )
    {
        std::cout << "ClapTrap" << _name << "no longer alive" << std::endl;
        _hitPoints = 0;
        return ;
    }
    _hitPoints -= amount;
    std::cout << "ClapTrap "<< _name << " take " << amount
    << " points of damage" << std::endl;
}

void ClapTrap::beRepaired(const unsigned int amount){
    _hitPoints += amount;
    if (_hitPoints >= _hitPointsCapacity ){
        std::cout << "ClapTrap " << _name << " is in good health for now"<< std::endl;
        _hitPoints = _hitPointsCapacity;
        return ;
    }
    std::cout << "ClapTrap " << _name << " repaired himslef "
    << amount << " Points" << std::endl;
    _energyPoints--;
}

std::string ClapTrap::getName(void) const{
    return (_name);
}

unsigned int ClapTrap::getHitPoint(void)const{
    return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const{
    return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const{
    return (_attackDamage);
}

void ClapTrap::setHitPoints(const unsigned int points){
    _hitPoints = points;
    _hitPointsCapacity = points;
}
void ClapTrap::setEnergyPoints(const unsigned int points){
    _energyPoints = points;
}
void ClapTrap::setAttackDamage(const unsigned int amount){
    _attackDamage = amount;
}

void ClapTrap::setName(const std::string name){
    _name = name;
}
