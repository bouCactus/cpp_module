#include<iostream>
#include"Fixed.hpp"
#include "Point.hpp"

int main(void)
{
//   // Test Case 1
//   {
//     Point a (1, 1);
//     Point b (3, 2);
//     Point c (2, 4);
//     Point point  (2, 2);
//     bool result = bsp(a, b, c, point);
//     std::cout << "true == " << result << std::endl; // Point (2,2) is inside the triangle
//   }
//   // Test Case 2
//   {
//     Point a  (1, 1);
//     Point b  (3, 2);
//     Point c  (2, 4);
//     Point point  (5, 5);
//     bool result = bsp(a, b, c, point);
//     std::cout << "false == " << result << std::endl; // Point (5,5) is outside the triangle
//   }
//   // Test Case 3
//   {
//     Point a  (0, 0);
//     Point b  (4, 0);
//     Point c (2, 4);
//     Point point (2, 2);
//     bool result = bsp(a, b, c, point);
//     std::cout << "true == " << result << std::endl;// Point (2,2) is inside the triangle
//   }
//   // Test Case 1: Point is a vertex
//   {
//     Point a (1, 1);
//     Point b (3, 2);
//     Point c (2, 4);
//     Point point  (3, 2);
//     bool result = bsp(a, b, c, point);
//     std::cout << "false " << (result) << std::endl; // Point (3,2) is a vertex of the triangle
//   }
// // Test Case 2: Point is on an edge
//   {
//     Point a (3, 1);
//     Point b (3.5, 1);
//     Point c (3, 3);
//     Point point (4, 1);
//     bool result = bsp(a, b, c, point);
//     std::cout << "false " << result << std::endl; // Point (2,3) is on the edge of the triangle
//   }

    
    Point a(0,0);
    Point b(2, 5.5f);
    Point c(4, 0);
    Point p(3.5, 3);
    Point op(2, 2);

    if(bsp(a, b, c, op))
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
    return 0;

  return (0);
}
