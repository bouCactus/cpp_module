

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__  
#include <iostream>

class ClapTrap{
    public:
        ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap &copy);
        ClapTrap(const std::string name);

        ClapTrap& operator = (const ClapTrap &copy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;
    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
};
#endif //__CLAPTRAP_H_