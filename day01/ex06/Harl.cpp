/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:19:29 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:19:30 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
                <<" ketchup burger.\nI really do!\n" << std::endl;
}
void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout <<    "I cannot believe adding extra bacon costs more money.\nYou didn't put enough"
            << "bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}
void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for"
                << "years whereas you started working here since last month.\n" << std::endl;
}
void Harl::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level){
    switch(hashit(level)){
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return ;
    }
}
int hashit(std::string const &inString){
    int i;
    std::string str2[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = 0;
    while (i < 4 && inString.compare(str2[i]))
        i++;
    return (i);
}