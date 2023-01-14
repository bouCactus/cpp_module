/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:15 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:18:16 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"


int main()
{
    int n;
    std::string name;
    Zombie* horde;

    std::cout << "Enter the number of zombies in the horde: ";
    std::cin >> n;
    std::cout << "Enter a name for the zombies in the horde: ";
    std::cin >> name;
    horde = zombieHorde(n, name);
    for (int i = 0; i < n; i++){
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}