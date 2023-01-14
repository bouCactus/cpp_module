/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:39 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:23:19 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    
    void attack();

private:
    Weapon &_weapon;
    std::string _name;
};
#endif // _HUMANA_H_