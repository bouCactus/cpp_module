#include<iostream>
#include<cstdlib>
#include"PhoneBook.hpp"
#include <string>


int    PhoneBook::add(int index)
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
    // std::cout << "enter last name: ";
    // getline(std::cin, input);
    //  while (input.empty())
    // {
    //     std::cout <<"plase enter last name: ";
    //     getline(std::cin, input);
    // }
    // Contact_list[index].last_name = input;
    // std::cout << "enter nickname: ";
    // getline(std::cin, input);
    //  while (input.empty())
    // {
    //     std::cout <<"plase enter nickname: ";
    //     getline(std::cin, input);
    // }
    // Contact_list[index].nickname = input;
    // std::cout << "enter phone number: ";
    // getline(std::cin, input);
    //  while (input.empty())
    // {
    //     std::cout <<"plase enter phone number: ";
    //     getline(std::cin, input);
    // }
    // Contact_list[index].phone_num = input;
    // std::cout << "enter darkest secret: ";
    // getline(std::cin, input);
    //  while (input.empty())
    // {
    //     std::cout <<"plase enter darkest secret: ";
    //     getline(std::cin, input);
    // }
    // Contact_list[index].darkest_secret = input;

    return (index + 1);
}

void    PhoneBook::search(int size)
{
    int id;
    std::string input;

    id = 0;
    show(id, size);
    std::cout << "choose an index: " ;
    getline(std::cin, input);
    while (input.empty() || !(std::all_of(input.begin(), input.end(), ::isdigit)))
    {
        std::cout <<"plase retry a number: ";
        getline(std::cin, input);
    }
    show(std::stoi(input), size);
}
void    PhoneBook::show(int id, int size)
{
    int i;
    int field_size[6];

    i = 0;
    field_size[0] = 5;
    field_size[1] = 10;
    field_size[2] = 10;
    field_size[3] = 10;
    field_size[4] = 13;
    field_size[5] = 15;

    print_line_field(field_size, 6);
    print_content_in_field(FLAG_1 | FLAG_0, "index", 5);
    print_content_in_field(FLAG_2 | FLAG_0, "first name", 10);
    print_content_in_field(FLAG_2 | FLAG_0, "last name", 10); 
    print_content_in_field(FLAG_2 | FLAG_0, "nickname", 10); 
    print_content_in_field(FLAG_2 | FLAG_0, "phone number", 13); 
    print_content_in_field(FLAG_3 | FLAG_0, "darkest secret", 15); 
    print_line_field(field_size, 6);
    while ((i + id) < size)
    {
        print_content_in_field(FLAG_1 | FLAG_4, std::to_string(i + 1), 5);
        print_content_in_field(FLAG_2 | FLAG_4 , Contact_list[i].first_name, 10);
        print_content_in_field(FLAG_2 | FLAG_4, Contact_list[i].last_name, 10); 
        print_content_in_field(FLAG_2 | FLAG_4, Contact_list[i].nickname, 10); 
        print_content_in_field(FLAG_2 | FLAG_4, Contact_list[i].phone_num, 13); 
        print_content_in_field(FLAG_3| FLAG_4, Contact_list[i].darkest_secret, 15); 
        i++;
    }
    print_line_field(field_size, 6);
}
void    PhoneBook::exit()
{
   std::exit(EXIT_SUCCESS); 
}