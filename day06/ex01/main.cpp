
#include <iostream>
#include "Data.hpp"


int main()
{
  Data original;
  Data *originalPtr;

  original.x = 2;
  original.y = 3;
  original.dir = 5.2;

  originalPtr = deserialize(serialize(&original));

  std::cout << "x: " << originalPtr->x << std::endl;
  std::cout << "y: " << originalPtr->y << std::endl;
  std::cout << "dir: " << originalPtr->dir << std::endl;
  std::cout << "=======================compare the addersses===================" << std::endl;
  std::cout << "original: " << &original << std::endl;
  std::cout << "originalPtr: " << originalPtr << std::endl;
  return (0);
}
