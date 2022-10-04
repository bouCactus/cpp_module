#include <iostream>
// #include"Contact.hpp"
#include"PhoneBook.hpp"

int main()
{
    
    int size;
    std::string command;
    std::string dummy;
    PhoneBook phone;

    std::cout << "input: ";
    size = 1;
    while (getline(std::cin, command))
    {
        if (!command.compare("ADD"))
        {
            std::cout << command << " . is found" << std::endl;
            phone.add(size);
        }
        if (!command.compare("SEARCH"))
        {
            std::cout << command << " . is found " << std::endl;
            phone.show(size);
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