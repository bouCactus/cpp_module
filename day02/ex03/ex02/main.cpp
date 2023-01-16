/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:02:45 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 15:02:46 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Fixed.hpp"


int main()
{
  {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
  
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
  }
  {
    Fixed a(5);
    Fixed b(4);

    std::cout << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    std::cout << a << " == " << b << " = " << (a == b) << std::endl;
    std::cout << a << " != " << b << " = " << (a != b) << std::endl;
    std::cout << a << " < " << b << " = " << (a < b) << std::endl;
    std::cout << a << " > " << b << " = " << (a > b) << std::endl;
    std::cout << a << " <= " << b << " = " << (a <= b) << std::endl;
    std::cout << a << " >= " << b << " = " << (a >= b) << std::endl;
    std::cout << a << " max " << b << " = " << Fixed::max(a, b) << std::endl;
    std::cout << a << " mix " << b << " = " << Fixed::min(a,b) << std::endl;
    
  }
  {
    Fixed a(5.5f);
    Fixed b(5.5f);

    std::cout << std::endl;
    std::cout << a << " + " << a << " + " << b << " = "<< a + a + b << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a <<  "* " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    std::cout << a << " == " << b << " = " << (a == b) << std::endl;
    std::cout << a << " != " << b << " = " << (a != b) << std::endl;
    std::cout << a << " < " << b << " = " << (a < b )<< std::endl;
    std::cout << a << " > " << b << " = " << (a > b) << std::endl;
    std::cout << a << " <= " << b << " = " << (a <= b) << std::endl;
    std::cout << a << " >= " << b << " = " << (a >= b) << std::endl;
    std::cout << a << " max " << b << " = " << Fixed::max(a, b) << std::endl;
    std::cout << a << " mix " << b << " = " << Fixed::min(a,b) << std::endl;
  }
  
  return (0);
}
