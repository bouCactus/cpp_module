

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
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        std::string     getName(void) const;
        unsigned int    getHitPoint(void)const;
        unsigned int    getEnergyPoints(void) const;
        unsigned int    getAttackDamage(void) const;
        void            setName(const std::string name);
        void            setAttackDamage(unsigned int amount);
        void            setHitPoints(unsigned int points);
        void            setEnergyPoints(unsigned int points);
    private:
        std::string          _name;
        unsigned int         _hitPoints;
        unsigned int         _energyPoints;
        unsigned int         _attackDamage;
};
#endif //__CLAPTRAP_H_