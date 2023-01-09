#include <iostream>
#include"PhoneBook.hpp"

int main()
{
    
    int index;
    int list_size;
    std::string command;
    std::string dummy;
    PhoneBook phone;

    std::cout << "List of commands: " << std::endl;
    std::cout << "ADD     : save a new contact" <<std::endl;
    std::cout << "SEARCH  : display a specific contact" << std::endl;
    std::cout << "EXIT    : quits the program " << std::endl;
    std::cout << "ifo     : if you exit, your contacts will be lost forever" <<std::endl;
    std::cout << std::endl;
    std::cout << "command: ";
    index = 0;
    list_size = 0;
    while (getline(std::cin, command)){
      if (!command.compare("ADD")){
	index = phone.add(index);
	if (list_size < 8)
	  list_size++;
      }
      if (!command.compare("SEARCH"))
	phone.search(list_size);
      if (!command.compare("EXIT"))
	phone.exit();
      std::cout << "command: ";
    }
    return (0);
}
