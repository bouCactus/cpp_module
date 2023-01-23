
#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
  std::vector<int> vec;
  std::list<int> lst;

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  lst.push_back(2);
  lst.push_back(3);
  lst.push_back(4);

  std::vector<int>::iterator val = easyfind(vec, 2);
  if (val != vec.end())
  std::cout << "easyfind found the element: " << *val
	    << " in the container" << std::endl;
  std::list<int>::iterator val2 = easyfind(lst, 4);
  if (val2 != lst.end())
    std::cout << "easyfind found the element: " << *val2
	      << " in the container" << std::endl;
  std::list<int>::iterator val3 = easyfind(lst, 0);
  if (val3 == lst.end())
    std::cout << "easyfind not found the element: " << 0 << std::endl;
  return (0);
}
