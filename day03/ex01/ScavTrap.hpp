

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {

    private:

    public:
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(const ScavTrap &copy);

    ScavTrap& operator= (const ScavTrap &copy);
    void    guardGate();
    void    attack(const std::string& target);
};
#endif //__SCAVTRAP_H__