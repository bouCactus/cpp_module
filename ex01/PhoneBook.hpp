#include<iostream>
#include "Contact.hpp"
#include<cstdint>
#define FLAG_0 (1 << 0)
#define FLAG_1 (1 << 1)
#define FLAG_2 (1 << 2)
#define FLAG_3 (1 << 3)
#define FLAG_4 (1 << 4)
#define FLAG_5 (1 << 5)

class PhoneBook
{
    Contact Contact_list[8];

  
public:
    int     add(int size);
    void    search(int size);
    void    exit();
    void    show(int id, int size);
};


void    print_line_field(int *field_size, int column_size);
void    print_content_in_field(uint8_t pos, std::string content, size_t size);