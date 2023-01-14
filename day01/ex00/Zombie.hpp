/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:18:10 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:24:07 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie{
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    
    void announce(void);

private:
    std::string _name;
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif //__ZOMBIE_H__