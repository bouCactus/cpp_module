#include <iostream>
#include"PhoneBook.hpp"
void help_info(void)
{
    std::cout << "List of commands: " << std::endl;
    std::cout << "ADD     : save a new contact" <<std::endl;
    std::cout << "SEARCH  : display a specific contact" << std::endl;
    std::cout << "EXIT    : quits the program " << std::endl;
    std::cout << "ifo     : if you exit, your contacts will be lost forever" <<std::endl;
    std::cout << std::endl;
}
int main()
{
    std::string command;
    PhoneBook phone;

    help_info();
    std::cout << "command: ";
    phone.setIndex(0);
    phone.setCapacity(0);
    while (getline(std::cin, command)){
      if (!command.compare("ADD")){
	        phone.add();
      }
      if (!command.compare("SEARCH"))
	      phone.search();
      if (!command.compare("EXIT"))
	phone.exit();
      std::cout << "command: ";
    }
    return (0);
}
