#include<iostream>
#include<cstdlib>
#include"PhoneBook.hpp"


void    PhoneBook::add(int size)
{
    std::string input;
    if (size > 9)
        size = 0;
    
    std::cout << "enter frist name: ";
    if (getline(std::cin, input))
    {
        Contact_list[size].first_name = input;
        std::cout << std::endl;
    }
    std::cout << "enter last name: ";
    getline(std::cin, input);
    std::cout << "enter nickname";
    getline(std::cin, input);
    std::cout << "enter phone number: ";
    getline(std::cin, input);
    std::cout << "enter darkest secret: ";
    getline(std::cin, input);

    return ;
}

void    PhoneBook::search()
{

}
void    PhoneBook::show(int size)
{
    int height;
    int width;
    
    height = 0;

    while (height < size)
    {
        width = 0;
        std::cout << "|" << std::endl;
        while (width < 10)
        {
            std::cout << "-";
            width++;
        }
        std::cout << std::endl << "|" << std::endl;
        height++;
    }
}
void    PhoneBook::exit()
{
   std::exit(EXIT_SUCCESS); 
}