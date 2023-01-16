/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:03:14 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 15:03:15 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"


Point::Point(void):
  _x(0),
  _y(0){
}

Point::~Point(void){
}

Point::Point(Fixed x, Fixed y):
  _x(x),
  _y(y){
  
}

Point::Point(const Point &other):
  _x(other.getX()),
  _y(other.getY()){
}

Point::Point(float x, float y) :
  _x(Fixed(x)),
  _y(Fixed(y)){
}

Point &Point::operator=(const Point &other){
  (void)other;
  return (*this);
}

Fixed const Point::getX(void) const {
  return (_x);
}

Fixed const Point::getY(void) const{
  return (_y);
}
