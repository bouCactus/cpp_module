/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:58:18 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/25 14:58:19 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __ITER_H__
#define __ITER_H__
#include <iostream>
template <typename T>
void iter(T (*arr), std::size_t N, void (*F)(T&))
{
    for( std::size_t i = 0 ; i < N ; i++)
    {
        F(arr[i]);
    }
}
template <typename T>
void iter(T (*arr), std::size_t N, void (*F)(const T&))
{
    for( std::size_t i = 0 ; i < N ; i++)
    {
        F(arr[i]);
    }
}
template <typename T>
void iter(T (*arr), std::size_t N, void (*F)( T))
{
    for( std::size_t i = 0 ; i < N ; i++)
    {
        F(arr[i]);
    }
}





#endif