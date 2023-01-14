/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:56 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:22:40 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Weapon.hpp"

Weapon::Weapon(void){
    std::cout << "Weapon: defualt constructor called" << std::endl;
}

Weapon::Weapon(std::string type):_type(type){
    std::cout << "Weapon: " << _type << " is created" << std::endl;
}

Weapon::~Weapon(void){
    std::cout << "Weapon: " << _type << " is deleted" << std::endl;
}

std::string const &Weapon::getType() const{
    return (_type);
}

void Weapon::setType(std::string type){
    this->_type = type;
}