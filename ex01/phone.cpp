#include <iostream>
#include"PhoneBook.hpp"

int main()
{
    
    int index;
    int list_size;
    std::string command;
    std::string dummy;
    PhoneBook phone;

    std::cout << "input: ";
    index = 0;
    list_size = 0;
    while (getline(std::cin, command))
    {
        if (!command.compare("ADD"))
        {
            std::cout << command << " . is found" << std::endl;
            index = phone.add(index);
            if (list_size < 8)
                list_size++;
        }
        if (!command.compare("SEARCH"))
        {
            std::cout << command << " . is found " << std::endl;
            phone.search(list_size);
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