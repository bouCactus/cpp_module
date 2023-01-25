/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:37:55 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/24 15:37:56 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DATA_H__
#define __DATA_H__
#include <iostream>

typedef struct Data
{
  float x;
  float y;
  float dir;

} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
#endif
