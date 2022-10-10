#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

void print_line_field(int *field_size, int column_size)
{
    int index;
    int width;

    index = 0;
    std::cout << "+";
    while (index < column_size)
    {
        width = 0;
        if (field_size[index] <= 10)
            field_size[index] = 11;
        std::cout << std::setfill('-') << std::setw(field_size[index] + 1);
        std::cout << "+";
        index++;
    }
    std::cout << std::endl;
    std::cout << std::setfill(' ');
    return;
}

void print_content_in_field(uint8_t pos, std::string content, size_t size)
{
    size_t width;
    width = 0;
    if (pos & FLAG_1)
        std::cout << "|";
    if (size <= 10)
        size = 11;
    std::cout << std::setw(size);
    if (pos & FLAG_0)
        std::cout << content;
    else
    {
        if (content.length() > 9 && (pos & FLAG_4))
            content.replace(9, 1, ".");

        std::cout << content.substr(0, 10);
    }
    std::cout << "|";
    if (pos & FLAG_3)
        std::cout << std::endl;
}
