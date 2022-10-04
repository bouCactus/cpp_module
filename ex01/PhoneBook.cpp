#include<iostream>
#include<cstdlib>
#include"PhoneBook.hpp"


void    PhoneBook::add(int index)
{
    std::string input;
    if (index > 9)
        index = 0;
    std::cout << "enter frist name: ";
    getline(std::cin, input);
    while (input.empty())
    {
        std::cout <<"plase enter frist name: ";
        getline(std::cin, input);
    }
    Contact_list[index].first_name = input;
    std::cout << "enter last name: ";
    getline(std::cin, input);
     while (input.empty())
    {
        std::cout <<"plase enter last name: ";
        getline(std::cin, input);
    }
    Contact_list[index].last_name = input;
    std::cout << "enter nickname";
    getline(std::cin, input);
     while (input.empty())
    {
        std::cout <<"plase enter nickname: ";
        getline(std::cin, input);
    }
    Contact_list[index].nickname = input;
    std::cout << "enter phone number: ";
    getline(std::cin, input);
     while (input.empty())
    {
        std::cout <<"plase enter phone number: ";
        getline(std::cin, input);
    }
    Contact_list[index].phone_num = input;
    std::cout << "enter darkest secret: ";
    getline(std::cin, input);
     while (input.empty())
    {
        std::cout <<"plase enter darkest secret: ";
        getline(std::cin, input);
    }
    Contact_list[index].darkest_secret = input;
    index++;

    return ;
}

void    PhoneBook::search()
{

}
void    PhoneBook::show(int index)
{
    int i;

    i = 0;
    print_line_field(5);
    print_content_in_field(1, "first name");
    print_content_in_field(2, "last name"); 
    print_content_in_field(2, "nickname"); 
    print_content_in_field(2, "phone num"); 
    print_content_in_field(3, "darkest secret"); 
    print_line_field(5);
    while (i < index)
    {
        print_content_in_field(1, Contact_list[i].first_name);
        print_content_in_field(2, Contact_list[i].last_name); 
        print_content_in_field(2, Contact_list[i].nickname); 
        print_content_in_field(2, Contact_list[i].phone_num); 
        print_content_in_field(3, Contact_list[i].darkest_secret); 
        i++;
    }
    print_line_field(5);
}
void    PhoneBook::exit()
{
   std::exit(EXIT_SUCCESS); 
}