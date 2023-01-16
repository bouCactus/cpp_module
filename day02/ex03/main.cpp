/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:03:08 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 15:03:09 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include"Fixed.hpp"
#include "Point.hpp"

int main(void)
{
  // Test Case 1
  {
    Point a (1, 1);
    Point b (3, 2);
    Point c (2, 4);
    Point point  (2, 2);
    bool result = bsp(a, b, c, point);
    std::cout << "true" << ((result) ?  " = true" : " = false") << std::endl; // Point (2,2) is inside the triangle
  }
  // Test Case 2
  {
    Point a  (1, 1);
    Point b  (3, 2);
    Point c  (2, 4);
    Point point  (5, 5);
    bool result = bsp(a, b, c, point);
    std::cout << "false" << ((result) ?  " = true" : " = false") << std::endl; // Point (5,5) is outside the triangle
  }
  // Test Case 3
  {
    Point a  (0, 0);
    Point b  (4, 0);
    Point c (2, 4);
    Point point (2, 2);
    bool result = bsp(a, b, c, point);
    std::cout << "true" << ((result) ?  " = true" : " = false") << std::endl;// Point (2,2) is inside the triangle
  }
  // Test Case 1: Point is a vertex
  {
    Point a (1, 1);
    Point b (3, 2);
    Point c (2, 4);
    Point point  (3, 2);
    bool result = bsp(a, b, c, point);
    std::cout << "false " << ((result) ?  " = true" : " = false") << std::endl; // Point (3,2) is a vertex of the triangle
  }
// Test Case 2: Point is on an edge
  {
    Point a (3, 1);
    Point b (3.5, 1);
    Point c (3, 3);
    Point point (4, 1);
    bool result = bsp(a, b, c, point);
    std::cout << "false " << ((result) ?  " = true" : " = false") << std::endl; // Point (2,3) is on the edge of the triangle
  }


  return (0);
}
