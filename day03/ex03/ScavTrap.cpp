#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void):
ClapTrap()
{
     std::cout << "ScavTrap defluat constructor called" << std::endl;
     setHitPoints(100);
     setEnergyPoints(100);
     setAttackDamage(20);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap distructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
     std::cout << "ScavTrap Copy constructor called" << std::endl;
     *this = copy;
}

ScavTrap::ScavTrap(const std::string name):
ClapTrap(name)

{
    std::cout << "ScavTrap Copy parameterized constructor called "<< std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(20);
}
ScavTrap &ScavTrap::operator= (const ScavTrap & copy)
{
   
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this !=  &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string &traget)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " can't do anything" << std::endl
        << "Energy is " << _energyPoints << std::endl << "Hit points is "
        << _hitPoints << std::endl;
    }
    std::cout << "ScavTrap " << _name << " attacks " << traget
    << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}