/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:07 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:18:08 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
#include<iostream>


Zombie::Zombie(void){
    std::cout << "Zombie is created"<< std::endl;
}

Zombie::Zombie(std::string name) :
_name(name){
    std::cout << _name << ": is created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << _name << ": is deleted" << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}


