

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__
#include<iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap , public FragTrap{
    public:
        DiamondTrap(void);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap(const std::string name);
        ~DiamondTrap(void);
        DiamondTrap & operator= (const DiamondTrap &copy);
        void whoAmI(void);
        std::string     getName(void) const;
        unsigned int    getHitPoint(void)const;
        unsigned int    getEnergyPoints(void) const;
        unsigned int    getAttackDamage(void) const;
        void            setName(const std::string name);
        void            setAttackDamage(const unsigned int amount);
        void            setHitPoints(const unsigned int points);
        void            setEnergyPoints(const unsigned int points);
    private:
        std::string _name;
};
#endif