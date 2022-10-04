#include <iostream>
// #include"Contact.hpp"
#include"PhoneBook.hpp"
int count = 2;
int main()
{
    
    class PhoneBook phone;
    // int size;
    std::string command;
    std::string dummy;

        std::cout << "input: ";
    // getline(std::cin, command);
    while (1)
    {
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // if (std::cin.eof())
        //     std::cout << "end of file" << std::endl;
        getline(std::cin, command);
        std::cout << command << " . is found" << std::endl;
        std::cin.ignore();
        std::cin.clear();
        command.clear();
    }
    // while (1)
    // {
    //     std::cout << "running...";
    // } 
    // std::cin >> command;
    // std::cout << "go: " << command;
    // while(1);
    // if (std::cin.eof())
    // {
    //     std::cin.clear();
    //     fflush(stdin);
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max());
    // }
    // getline(std::cin, command);
    // std::cout << command << "\n";
    return (0);
}