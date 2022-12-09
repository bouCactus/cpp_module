

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__
#include<iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public FragTrap , public ScavTrap{
    private:
        std::string _name;
    public:
        DiamondTrap(void);
        DiamondTrap(const DiamondTrap &copy);
        DiamondTrap(const std::string name);
        ~DiamondTrap(void);
        DiamondTrap & operator= (const DiamondTrap &copy);
        void whoAmI(void);
        // void attack(const std::string& name);
};
#endif