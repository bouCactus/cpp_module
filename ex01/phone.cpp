#include <iostream>
// #include"Contact.hpp"
#include"PhoneBook.hpp"

int main()
{
    
    int index;
    std::string command;
    std::string dummy;
    PhoneBook phone;

    std::cout << "input: ";
    index = 0;
    while (getline(std::cin, command))
    {
        if (!command.compare("ADD"))
        {
            std::cout << command << " . is found" << std::endl;
            index = phone.add(index);
        }
        if (!command.compare("SEARCH"))
        {
            std::cout << command << " . is found " << std::endl;
            phone.search(index);
        }
        if (!command.compare("EXIT"))
        {
            std::cout << command << " . is found " << std::endl;
            phone.exit();
        }
        std::cout << "input: ";
    }
    return (0);
}