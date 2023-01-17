

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {
    public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(const FragTrap &copy);
    FragTrap(const std::string name);
    FragTrap(const std::string name, unsigned int hitPoints,
             unsigned int energyPoints, unsigned int attackDamage);
    FragTrap& operator= (const FragTrap &copy);
    
    void    highFivesGuys(void);
    private:
};
#endif //__SCAVTRAP_H__