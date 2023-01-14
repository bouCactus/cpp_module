/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:19:36 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:20:46 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"Harl.hpp"


int main(int argc, char *argv[])
{
    Harl harl;
    
    if (argc == 2)
        harl.complain(argv[1]);
    else
        std::cout << "no level entered!" << std::endl;
    return (0);
}
