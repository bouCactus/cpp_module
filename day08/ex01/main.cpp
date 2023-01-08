
#include <iostream>
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
  return (0);
}
