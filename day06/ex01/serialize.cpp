/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:38:05 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/24 15:38:06 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
  return (reinterpret_cast<uintptr_t>(ptr));
}
Data *deserialize(uintptr_t raw)
{
  return (reinterpret_cast<Data *>(raw));
}

