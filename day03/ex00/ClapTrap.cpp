#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "defluat constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::ClapTrap(const std::string name) : _name(name)
{

}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this !=  &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

std::string ClapTrap::getName(void) const
{
    return (_name);
}


void ClapTrap::attack(const std::string &traget)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ClapTrap" << _name << "can't do anything" << std::endl
        << "Energy is " << _energyPoints << std::endl << "Hit points is "
        << _hitPoints << std::endl;
    }
    std::cout << "ClapTrap" << _name << "attacks" << traget
    << ", causing " << _attackDamage << "points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 0 )
        _hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    if (_hitPoints > 10 )
        _hitPoints = 10;
}