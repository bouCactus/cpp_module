/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:36 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:18:37 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
_weapon(weapon),
_name(name){
    std::cout << "HumanA: " << _name << " is created"<<std::endl;
}

HumanA::~HumanA(){
    std::cout << "HumanA: " << _name << " is deleted"<<std::endl;
}

void HumanA::attack(){
    std::cout << "HumanA: " << _name <<" attacks with their " << _weapon.getType() << std::endl;
}