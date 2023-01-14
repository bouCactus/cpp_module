/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:42 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:23:11 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
    std::cout << "default constructor called" << std::endl;
}

HumanB::HumanB(std::string name) :
_name(name){
    std::cout << "HumanB: "<< _name << " is created" << std::endl;
}

HumanB::~HumanB(){
    std::cout << "HumanB: " << _name << " human is deleted" << std::endl;
}

void HumanB::attack(){
    if (_weapon == NULL){
        std::cout << "HumanB: " << _name << " doesn't have a weapon!" << std::endl;
        return ;
    }
    std::cout << "HumanB: " << _name << " attacks with their" << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon){
    this->_weapon = &Weapon;
}