#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap(void):
ClapTrap("someone")
{
    std::cout << "DiamondTrap defualt constructor called" << std::endl;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
}

DiamondTrap::DiamondTrap(std::string name):
ClapTrap(),_name(name)
{
    std::cout << "DiamondTrap paramitraze constructor called" << std::endl;
    // this->_name = name;
    ClapTrap::setName((name.append("_clap_name")));
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap distructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
     if (this !=  &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: \"" << _name << "\" ClapTrap name: \"" << ClapTrap::_name << "\""<< std::endl;
}

void DiamondTrap::setName(const std::string name)
{
    this->_name = name;
}
std::string DiamondTrap::getName(void)const
{
    return (this->_name);
}