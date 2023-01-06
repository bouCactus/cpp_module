
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
  try
    {
      int val = easyfind(vec, 2);
      std::cout << "easyfind found the element " << val
		<< " in the container" << std::endl;
      val = easyfind(lst, 4);
      std::cout << "easyfind found the element " << val
		<< " in the container" << std::endl;
      val = easyfind(lst, 0);
    }
  catch(int num)
    {
      std::cout << "easyfind could not find the element "
		<< num << " in the container"<<  std::endl;
    }
  return (0);
}
