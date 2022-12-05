

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {

    private:

    public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(const FragTrap &copy);
    FragTrap(const std::string name);

    FragTrap& operator= (const FragTrap &copy);
    void    highFivesGuys(void);
    void    attack(const std::string& target);
};
#endif //__SCAVTRAP_H__