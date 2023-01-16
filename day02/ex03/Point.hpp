/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:03:16 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/16 15:03:17 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __POINT__H_
#define __POINT__H_
#include "Fixed.hpp"

class Point{
public:
  Point(void);
  ~Point(void);
  Point(Fixed x, Fixed y);
  Point(float x, float y);
  Point(const Point &other);
  Point &operator=(const Point &other);

  Fixed const getX(void) const;
  Fixed const getY(void) const;
private:
  Fixed const _x;
  Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif // __POINT__H_
