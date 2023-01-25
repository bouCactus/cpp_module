/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templateFunction.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:58:14 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/25 14:58:15 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __TEMPLATEFUNCTION_H__
#define __TEMPLATEFUNCTION_H__

template <class T>
void swap(T &first, T &second)
{
    T temp;
    temp = first;
    first = second;
    second = temp;
}

template <class T>
T min(T first, T second)
{
    if (first < second)
        return (first);
    return (second);
}

template <typename T>
T max(T first, T second)
{
   if (first > second)
        return (first);
    return (second);
}
#endif