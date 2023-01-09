#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include <string>


std::string get_input(std::string retry_mess, int flag)
{
    std::string input;
   getline(std::cin, input);
    while (input.empty() || (!(std::all_of(input.begin(), input.end(), ::isdigit)) && flag))
    {
        std::cout << retry_mess;
        getline(std::cin, input);
    }
    return (input);
}

int PhoneBook::add(int index)
{
    std::string input;
    if (index > 7)
        index = 0;
    std::cout << "enter frist name: ";
    Contact_list[index].first_name = get_input("plase enter first name: ", 0);
    std::cout << "enter last name: ";
    Contact_list[index].last_name = get_input("plase enter last name: ", 0);
    std::cout << "enter nickname: ";
    Contact_list[index].nickname = get_input("plase enter nickname: ", 0);
    std::cout << "enter phone number: ";
    Contact_list[index].phone_num = get_input("plase enter phone number: ", 1);
    std::cout << "enter darkest secret: ";
    Contact_list[index].darkest_secret = get_input("plase enter darkest secret: ", 0);
    return (index + 1);
}

void PhoneBook::search(int size)
{
    int id;
    std::string input;

    id = 0;
    show(id, size);
    std::cout << "#choose an index: ";
    getline(std::cin, input);
    while (input.empty() || !(std::all_of(input.begin(), input.end(), ::isdigit))
	   || input.length() > 1){
      //      if (size == 0)

        std::cout << "#plase retry a number: ";
        getline(std::cin, input);
    }
    id = std::stoi(input);
    if (id > size){
      std::cout << "the number out of range!" << std::endl;
      std::cout << "or the PhoneBook is empty" << std::endl;
      return ;
    }
    show(id, size);
}

void PhoneBook::show(int id, int size)
{
    int i;
    int field_size[4];

    i = 0;
    field_size[0] = 5;
    field_size[1] = 10;
    field_size[2] = 10;
    field_size[3] = 10;
    print_line_field(field_size, 4);
    print_content_in_field(FLAG_1 | FLAG_0, "index", 5);
    print_content_in_field(FLAG_2 | FLAG_0, "first name", 10);
    print_content_in_field(FLAG_2 | FLAG_0, "last name", 10);
    print_content_in_field(FLAG_3 | FLAG_0, "nickname", 10);
    print_line_field(field_size, 4);
    while (i < size)
    {
        if (id > 0  && id <= size)
        {
            print_content_in_field(FLAG_1 | FLAG_4, std::to_string(id), 5);
            print_content_in_field(FLAG_2 | FLAG_4, Contact_list[id - 1].first_name, 10);
            print_content_in_field(FLAG_2 | FLAG_4, Contact_list[id - 1].last_name, 10);
            print_content_in_field(FLAG_3 | FLAG_4, Contact_list[id - 1].nickname, 10);
            break ;
        }
        else if (id < size)
        {
            print_content_in_field(FLAG_1 | FLAG_4, std::to_string(i + 1), 5);
            print_content_in_field(FLAG_2 | FLAG_4, Contact_list[i].first_name, 10);
            print_content_in_field(FLAG_2 | FLAG_4, Contact_list[i].last_name, 10);
            print_content_in_field(FLAG_3 | FLAG_4, Contact_list[i].nickname, 10);
        }
        i++;
    }
    print_line_field(field_size, 4);
}

void PhoneBook::exit()
{
    std::exit(EXIT_SUCCESS);
}
