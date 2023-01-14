/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:26 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:23:41 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    
    i = 0;
    Zombie* horde = new Zombie[N];
    while (i < N){
        horde[i].set_name(name);
        i++;
    }
   return (horde); 
}