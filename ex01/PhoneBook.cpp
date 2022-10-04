#include<iostream>
#include"PhoneBook.hpp"


void    PhoneBook::add(int size)
{
    if (size > 9)
        size = 0;
    std::cout << "enter frist name: ";
    std::cin >> Contact_list[size].first_name;

    return ;
}

void    PhoneBook::search()
{

}

void    PhoneBook::exit()
{
    
}