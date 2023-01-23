
#include <iostream>
#include <vector>
#include "Span.hpp"

int main()
{
  Span span(5);
  try{
  span.addNumber(6);
  span.addNumber(3);
  span.addNumber(17);
  span.addNumber(9);
  span.addNumber(11);
  std::cout << span.shortestSpan() << std::endl;
  std::cout << span.longestSpan() << std::endl;
  }
  catch(std::exception &e){
      std::cout << e.what()<< std::endl;
  }
  {
    // std::vector<int> ve = {2,3,4,5,6};
    Span span;
    // span.addRange(ve.begin(), ve.end());
  }
  return (0);
}
