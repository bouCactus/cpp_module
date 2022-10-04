#include<iostream>
#include "Contact.hpp"

class PhoneBook
{
    Contact Contact_list[8];

  
public:
    void    add(int size);
    void    search();
    void    exit();
    void    show(int size);
};


void    print_line_field(int field_size);
void    print_content_in_field(int pos, std::string content);