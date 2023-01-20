#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
    {
      std::cout << "---------test normal case--------\n" << std::endl;
      try{
        Bureaucrat  scabtree("scabtree", 5);
        Form googleFrom("googleFrom", 10, 13);

        scabtree.signForm(googleFrom);
        std::cout << scabtree << std::endl;
      }
      catch(std::exception &e){
        std::cout << e.what() << std::endl;
      }
    }
    std::cout << std::endl << "------- test the egal --------\n" << std::endl;
    {
      try{
        Bureaucrat slubgob("slubgob", 1);
        Form googleFrom2("googleFrom2", 1, 1);

        slubgob.signForm(googleFrom2);
        std::cout << slubgob << std::endl;
      }
      catch(std::exception &e){
        std::cout << e.what() << std::endl;
      }

    }
    std::cout << std::endl << "-------test too low to be sign------\n" << std::endl;
    {
      try{
        Bureaucrat slubgob("slubgob", 30);
        Form googleFrom2("googleFrom2", 20, 1);

        slubgob.signForm(googleFrom2);
        std::cout << slubgob << std::endl;
      }
      catch(std::exception &e){
        std::cout << e.what() << std::endl;
      }

    }
    return (0);
}
