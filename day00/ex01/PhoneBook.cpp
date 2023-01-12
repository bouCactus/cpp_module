#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include <string>


PhoneBook::PhoneBook(void) :
_index(0),
_capacity(0){

}
std::string get_input(std::string retry_mess)
{
    std::string input;
    if (!getline(std::cin, input)) {
        std::cout << std::endl << "Exiting program" << std::endl;
        exit(0);
    }
    while (input.empty())
    {
        std::cout << retry_mess;
        if (!getline(std::cin, input)){
            std::cout << std::endl << "Exiting program" << std::endl;
            exit(0);
        }
    }
    return (input);
}

void PhoneBook::addContact(void)
{
    if (_index > 7)
        _index = 0;
    std::cout << "enter frist name: ";
    Contact_list[_index].setFirstName(get_input("plase enter first name: "));
    std::cout << "enter last name: ";
    Contact_list[_index].setLastName(get_input("plase enter last name: "));
    std::cout << "enter nickname: ";
    Contact_list[_index].setNickname(get_input("plase enter nickname: "));
    std::cout << "enter phone number: ";
    Contact_list[_index].setPhoneNum(get_input("plase enter phone number: "));
    std::cout << "enter darkest secret: ";
    Contact_list[_index].setDarkestSecret(get_input("plase enter darkest secret: "));
    _index++;
    if (_capacity < 8)
        _capacity++;
    std::cout << "\033[1;33mNew contact added\033[0m" << std::endl;
}

int PhoneBook::checkIndex(std::string input)
{
    while (input.empty() || input.length() > 1 || !isdigit(input.at(0)))
    {
        std::cout << "\033[1;31mindex not valid index! \033[0m" << std::endl;
        std::cout << "\033[1;32mEnter index: \033[0m";
        if (!getline(std::cin, input)){
            std::cout << std::endl << "Exiting program" << std::endl;
            exit(0);
        }
    }
    return (std::stoi(input));
}

void PhoneBook::searchContacts(void)
{
    std::string input;
    int index;

    if (_capacity == 0){
        std::cout << "\033[1;32mThe contact list is empty. Please add some contacts first.\033[0m" << std::endl;
        return ;
    }
    showTable();
    std::cout << "\033[1;32mEnter index: \033[0m";
    while (true)
    {
        if(!getline(std::cin, input)){
            std::cout << std::endl << "Exiting program" << std::endl;
        }
        index = checkIndex(input);
        if (index <= 0 || index > _capacity) {
            std::cout << "\033[1;31mThe index you entered is out of range. Please enter a valid index:\033[0m" << std::endl;
            std::cout << "\033[1;32mEnter index: \033[0m";
        }
        else {
            break;
        }
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
            print_content_in_field(BODY_CONTENT, Contact_list[i].getFirstName(), 10);
            print_content_in_field(BODY_CONTENT, Contact_list[i].getLastName(), 10);
            print_content_in_field(END_LINE | BODY_CONTENT, Contact_list[i].getNickname(), 10);
        i++;
    }
    print_line_field(field_size, 4);
}

void PhoneBook::exitProgram()
{
    std::exit(EXIT_SUCCESS);
}

void PhoneBook::contact_info(Contact &contact)
{
    std::cout << "first name    : " << contact.getFirstName() << std::endl;
    std::cout << "last name     : " << contact.getLastName() << std::endl;
    std::cout << "nickname      : " << contact.getNickname() << std::endl;
    std::cout << "phone number  : " << contact.getPhoneNum() << std::endl;
    std::cout << "darkest secret: " << contact.getDarkestSecret() << std::endl;
}
void PhoneBook::printHelp(void)
{
    std::cout << "List of commands: " << std::endl;
    std::cout << "ADD     : save a new contact" <<std::endl;
    std::cout << "SEARCH  : display a specific contact" << std::endl;
    std::cout << "EXIT    : quits the program " << std::endl;
    std::cout << "ifo     : if you exit, your contacts will be lost forever" <<std::endl;
    std::cout << std::endl;
}