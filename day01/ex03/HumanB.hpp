/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:45 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:22:55 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:

    HumanB();
    HumanB(std::string name);
    ~HumanB();
    
    void attack();
    void setWeapon(Weapon &Weapon);

private:
    Weapon *_weapon;
    std::string _name;
};
#endif //__HUMANB_H__