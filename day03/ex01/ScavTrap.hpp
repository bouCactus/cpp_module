

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    public:
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap(const ScavTrap &copy);

    ScavTrap& operator= (const ScavTrap &copy);

    private:

};
#endif //__SCAVTRAP_H__