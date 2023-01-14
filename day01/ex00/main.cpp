/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:17:47 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:17:48 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *voodoo;
    Zombie *deathMan;

    voodoo = newZombie("Voodoo");
    deathMan = newZombie("deathMan");
    voodoo->announce();
    deathMan->announce();
    randomChump("Romero");
    randomChump("fozenZombie");
    delete deathMan;
    delete voodoo;
    return (0);
}