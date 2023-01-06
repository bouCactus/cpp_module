

#ifndef __EASYFIND_H__
#define __EASYFIND_H__
#include <iostream>

template <typename T>
int easyfind(T contianer, int number)
{
  typename T::iterator it;
  it = find(contianer.begin(), contianer.end(), number);
  if (it == contianer.end())
    throw ("the element not found");
  return *it ;
}
#endif
