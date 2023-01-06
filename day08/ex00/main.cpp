
#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
  std::vector<int> ar;
  std::list<int> listo;

  ar.push_back(1);
  ar.push_back(2);
  ar.push_back(3);
  ar.push_back(4);

  listo.push_back(2);
  listo.push_back(3);
  listo.push_back(4);
  try
    {
      int go = easyfind(ar, 3);
      std::cout << "the return: " << go << std::endl;
      int li = easyfind(listo,4);
      std::cout << "the easyfind found the number: " << li << std::endl;
      go = easyfind(listo, 1);
    }
  catch(char const *str)
    {
      std::cout << str << std::endl;
    }
  return (0);
}
