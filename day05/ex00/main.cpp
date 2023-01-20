#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
  std::cout << "-----test grade is lower-----\n"<< std::endl;
  {
    try{
      Bureaucrat Scabtree("Scabtree", 300);

      std::cout << Scabtree << std::endl;
    }
    catch (std::exception &e){
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl <<  "------test test grade is higher-----\n" << std::endl;
   {
    try{
      Bureaucrat Scabtree("Scabtree", -12);

      std::cout << Scabtree << std::endl;
    }
    catch (std::exception &e){
      std::cout << e.what() << std::endl;
    }
  }

  std::cout << std::endl << "------test decrement Grade -------\n" << std::endl;
  {
    try
    {
      Bureaucrat Wormwood("Wormwood", 4);

      for (int i = 149; i < 153; i++){
        Wormwood.decrementGrade();
        std::cout << Wormwood << std::endl;
      }
    }
    catch (std::exception &e){
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl << "------test  increment Grade -------\n" << std::endl;
  {
    try
    {
      Bureaucrat Wormwood("Wormwood", 4);

      for (int i = 20; i > 0; i++){
        Wormwood.incrementGrade();
        std::cout << Wormwood << std::endl;
      }
    }
    catch (std::exception &e){
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl << "-----------------the end--------------\n" << std::endl;
  return (0);
}
