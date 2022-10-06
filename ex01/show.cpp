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
        while (width < field_size[index] + 2)
        {
            std::cout << "-";
            width++;
        }
        std::cout << "+";
        index++;
    }
    std::cout << std::endl;
    return;
}

// void print_str_size(std::string str, int )
// {
//    std::substr
// }
void print_content_in_field(uint8_t pos, std::string content, size_t size)
{
    (void)size;
    (void)content;
    size_t width;
    width = 0;
    if (pos & FLAG_1)
        std::cout << "|";

    std::cout << std::setw(10);
    if (pos & FLAG_0)
        std::cout << content;
    else
        std::cout << content.substr(0, 10);
    if (content.length() > 9 && (pos & FLAG_4))
        std::cout << ".";
   
    std::cout << "|";
    if (pos & FLAG_3)
        std::cout << std::endl;
    return;
}