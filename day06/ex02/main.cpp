/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:38:35 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/24 15:38:36 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
  Base *objs;

  objs = generate();
  {
    identify(objs);
    identify(*objs);
  }
  {
    Base *inst;

    inst = new Base();
    identify(inst);
    identify(*inst);
    delete inst;
  }
  delete objs;
  return (0);
}
