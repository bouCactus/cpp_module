#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

void PhoneBook::print_line_field(int *field_size, int column_size)
{
    int index;

    index = 0;
    std::cout << "+";
    while (index < column_size)
    {
        std::cout << std::setfill('-') << std::setw(field_size[index] + 1);
        std::cout << "+";
        index++;
    }
    std::cout << std::endl;
    std::cout << std::setfill(' ');
    return;
}

void PhoneBook::print_content_in_field(uint8_t pos, std::string content, size_t size)
{
    if (pos & PIPE_AT_START)
        std::cout << "|";
    std::cout << std::setw(size);
    if (pos & HEADER_NAME)
        std::cout << content;
    else
    {
        if (content.length() > 9 && (pos & BODY_CONTENT))
            content.replace(9, 1, ".");

        std::cout << content.substr(0, 10);
    }
    std::cout << "|";
    if (pos & END_LINE)
        std::cout << std::endl;
}

