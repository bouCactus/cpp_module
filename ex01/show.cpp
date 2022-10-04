#include <iostream>

void print_line_field(int field_size)
{
    int height;
    int width;

    height = 0;
    std::cout << "+";
    while (height < field_size)
    {
        width = 0;
        while (width < 12)
        {
            std::cout << "-";
            width++;
        }
        std::cout << "+";
        height++;
    }
    std::cout << std::endl;
    return;
}

void print_content_in_field(int pos, std::string content)
{
    int width;

    width = 0;
    if (pos == 1)
        std::cout << "|";
    std::cout << " ";
    while (width < 10)
    {
        if (content[width])
            std::cout << content[width];
        else
            std::cout << " ";
        width++;
    }
    std::cout << " |";
    if (pos == 3)
        std::cout << std::endl;
    return;
}