/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 07:58:12 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/18 07:58:13 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
    public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(const FragTrap &copy);
    FragTrap(const std::string name);
    FragTrap(const std::string name, unsigned int hitPoints,
             unsigned int energyPoints, unsigned int attackDamage);
    FragTrap& operator= (const FragTrap &copy);
    
    void    highFivesGuys(void);
    void    attack(const std::string& target);
    private:
};
#endif //__SCAVTRAP_H__