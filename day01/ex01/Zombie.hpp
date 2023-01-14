/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:23 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:23:49 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>

class Zombie
{
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    
    void    announce(void);
    void    set_name(std::string name);
private:
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );
#endif // __ZOMBIE_H__