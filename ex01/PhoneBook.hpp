#include<iostream>
#include "Contact.hpp"

class PhoneBook
{
    Contact Contact_list[8];

  
public:
    void    add(int size);
    void    search();
    void    exit();
    void    show();
};