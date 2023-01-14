/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:19:00 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:19:01 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__
#include <iostream>
class Weapon
{
public:
    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);
    
    void                setType(std::string);
    std::string const   &getType() const;

private:
    std::string _type;
};
#endif