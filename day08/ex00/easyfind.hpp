

#ifndef __EASYFIND_H__
#define __EASYFIND_H__
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &contianer, int number)
{
  typename T::iterator it;
  it = find(contianer.begin(), contianer.end(), number);
  if (it == contianer.end())
    return (contianer.end());
  return it ;
}
#endif
