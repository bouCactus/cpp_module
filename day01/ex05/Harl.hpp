/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:19:19 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 22:21:30 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__
#include<iostream>

class Harl{
public:
    void complain( std::string level );
    
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};
int hashit(std::string const &inString);
#endif