/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:59:13 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/18 07:59:14 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap {
public:
  ScavTrap(void);
  ~ScavTrap(void);
  ScavTrap(const ScavTrap &copy);
  ScavTrap(const std::string name);
  ScavTrap(const std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);

    ScavTrap& operator= (const ScavTrap &copy);

    void    guardGate();
    void    attack(const std::string& target);
    std::string     getName(void) const;
    unsigned int    getHitPoint(void)const;
    unsigned int    getEnergyPoints(void) const;
    unsigned int    getAttackDamage(void) const;
protected:
  unsigned int _energyPoints;
};
#endif //__SCAVTRAP_H__
