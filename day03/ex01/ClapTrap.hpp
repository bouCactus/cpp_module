/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:33:15 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 19:33:36 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__  
#include <iostream>

class ClapTrap{
public:
  ClapTrap(void);
  virtual ~ClapTrap(void);
  ClapTrap(const ClapTrap &copy);
  ClapTrap(const std::string name);
  ClapTrap(const std::string name,unsigned int  hitPoints,unsigned int energyPoints,unsigned int  attackDamage);
  
  ClapTrap& operator = (const ClapTrap &copy);
  
  virtual void    attack(const std::string& target);
  void            takeDamage(const unsigned int amount);
  void            beRepaired(const unsigned int amount);
  std::string     getName(void) const;
  unsigned int    getHitPoint(void)const;
  unsigned int    getEnergyPoints(void) const;
  unsigned int    getAttackDamage(void) const;
  void            setName(const std::string name);
  void            setAttackDamage(const unsigned int amount);
  void            setHitPoints(const unsigned int points);
  void            setEnergyPoints(const unsigned int points);

protected:
  std::string          _name;
  unsigned int         _hitPoints;
  unsigned int         _energyPoints;
  unsigned int         _attackDamage;
  unsigned int         _hitPointsCapacity;
};
#endif //__CLAPTRAP_H_
