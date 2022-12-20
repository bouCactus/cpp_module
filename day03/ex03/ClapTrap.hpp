

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__  
#include <iostream>

class ClapTrap{
    protected:
        std::string          _name;
        unsigned int         _hitPoints;
        unsigned int         _energyPoints;
        unsigned int         _attackDamage;
    public:
        ClapTrap(void);
        virtual ~ClapTrap(void); // why? wlah ma3art
        ClapTrap(const ClapTrap &copy);
        ClapTrap(const std::string name);

        ClapTrap& operator = (const ClapTrap &copy);
        virtual void    attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        virtual std::string     getName(void) const;
        unsigned int    getHitPoint(void)const;
        unsigned int    getEnergyPoints(void) const;
        unsigned int    getAttackDamage(void) const;
        virtual void            setName(const std::string name);
        void            setAttackDamage(unsigned int amount);
        void            setHitPoints(unsigned int points);
        void            setEnergyPoints(unsigned int points);
};
#endif //__CLAPTRAP_H_