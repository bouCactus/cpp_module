#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void):
ClapTrap()
{
     std::cout << "FragTrap  defluat constructor called" << std::endl;
     setHitPoints(100);
     setEnergyPoints(100);
     setAttackDamage(30);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap distructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
     std::cout << "FragTrap Copy constructor called" << std::endl;
     *this = copy;
}

FragTrap::FragTrap(const std::string name):
ClapTrap(name)

{
    std::cout << "FragTrap Copy parameterized constructor called "<< std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(20);
}
FragTrap &FragTrap::operator= (const FragTrap & copy)
{
   
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this !=  &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

void FragTrap::attack(const std::string &traget)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "FragTrap " << _name << " can't do anything" << std::endl
        << "Energy is " << _energyPoints << std::endl << "Hit points is "
        << _hitPoints << std::endl;
    }
    std::cout << "FragTrap " << _name << " attacks " << traget
    << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap high fives guys!" << std::endl;
}