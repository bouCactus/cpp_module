/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:38:23 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/24 15:38:24 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __BASE_H__
#define __BASE_H__

class Base{
public:
  virtual ~Base(void);
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);
#endif
