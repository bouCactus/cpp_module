/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:38:32 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/24 16:15:09 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
  srand(time(0));
  int number = rand() % 3;
   if (number == 1)
    return (new A());
  else if (number == 2)
    return (new B());
  return (new C());
}

void identify(Base* p)
{
  A *a;
  B *b;
  C *c;

  a = dynamic_cast<A*>(p);
  b = dynamic_cast<B*>(p);
  c = dynamic_cast<C*>(p);
  if (a != NULL)
    std::cout << "this type: A" << std::endl;
  else if (b != NULL)
    std::cout << "this type: B" << std::endl;
  else if (c != NULL)
    std::cout << "this type: C" << std::endl;
  else
    std::cout << "this type: not found" << std::endl;
}
void identify(Base& p)
{
  try
    {
      A& a  = dynamic_cast<A&>(p);

      (void)a;
      std::cout << "this type: A" << std::endl;
    }
  catch(std::exception &e)
    {
      try
	{
	  B& b = dynamic_cast<B&>(p);
    
    (void)b;
	  std::cout << "this type: B" << std::endl;
	}
      catch(std::exception &e)
	{
	  try
	    {
	      C& c = dynamic_cast<C&>(p);

        (void)c;
	      std::cout << "this type C" << std::endl;
	    }
	  catch(std::exception &e)
	    {
        std::cout << "this type not found" << std::endl;
      }
	}
    }
  
 }
