#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include <string>


std::string get_input(std::string retry_mess)
{
    std::string input;
   getline(std::cin, input);
    while (input.empty())
    {
        std::cout << retry_mess;
        getline(std::cin, input);
    }
    return (input);
}

void PhoneBook::add(void)
{
    if (_index > 7)
        _index = 0;
    std::cout << "enter frist name: ";
    Contact_list[_index].first_name = get_input("plase enter first name: ");
    std::cout << "enter last name: ";
    Contact_list[_index].last_name = get_input("plase enter last name: ");
    std::cout << "enter nickname: ";
    Contact_list[_index].nickname = get_input("plase enter nickname: ");
    std::cout << "enter phone number: ";
    Contact_list[_index].phone_num = get_input("plase enter phone number: ");
    std::cout << "enter darkest secret: ";
    Contact_list[_index].darkest_secret = get_input("plase enter darkest secret: ");
    _index++;
    if (_capacity < 8)
        _capacity++;
}

int checkIndex(std::string input)
{
    while (input.empty() || input.length() > 1 || !isdigit(input.at(0)))
    {
        std::cout << "index not valid index!" << std::endl;
        getline(std::cin, input);
    }
    return (std::stoi(input));
}

void PhoneBook::search(void)
{
    std::string input;
    int index;

    if (_capacity == 0){
        std::cout << "the phone table is empty" << std::endl;
        return ;
    }
    showTable();
    std::cout << "#choose an index: ";
    getline(std::cin, input);
    index = checkIndex(input);
    std::cout << index << std::endl;
    while (index <= 0 || index > _capacity)
    {
       std::cout << "the index out of range" << std::endl;
       std::cout << "retry new index: ";
       getline(std::cin, input);
       index = checkIndex(input);
    }
    contact_info(Contact_list[index - 1]);
}

void PhoneBook::showTable(void)
{
    int i;
    int field_size[4];

    i = 0;
    field_size[0] = 10;
    field_size[1] = 10;
    field_size[2] = 10;
    field_size[3] = 10;
    print_line_field(field_size, 4);
    print_content_in_field(PIPE_AT_START | HEADER_NAME, "index", 10);
    print_content_in_field(HEADER_NAME, "first name", 10);
    print_content_in_field(HEADER_NAME, "last name", 10);
    print_content_in_field(END_LINE | HEADER_NAME, "nickname", 10);
    print_line_field(field_size, 4);
    while (i < _capacity)
    {
            print_content_in_field(PIPE_AT_START | BODY_CONTENT, std::to_string(i + 1), 10);
            print_content_in_field(BODY_CONTENT, Contact_list[i].first_name, 10);
            print_content_in_field(BODY_CONTENT, Contact_list[i].last_name, 10);
            print_content_in_field(END_LINE | BODY_CONTENT, Contact_list[i].nickname, 10);
        i++;
    }
    print_line_field(field_size, 4);
}

void PhoneBook::exit()
{
    std::exit(EXIT_SUCCESS);
}

void PhoneBook::setIndex(int num)
{
    _index = num;
}

void PhoneBook::setCapacity(int num)
{
    _capacity = num;
}
int PhoneBook::getCapacity(void) const
{
    return (_capacity);
}
