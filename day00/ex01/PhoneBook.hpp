#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include<iostream>
#include "Contact.hpp"
#include<cstdint>
#define HEADER_NAME (1 << 0)
#define PIPE_AT_START (1 << 1)
#define END_LINE (1 << 2)
#define BODY_CONTENT (1 << 3)


class PhoneBook
{
    Contact Contact_list[8];
    int     _index;
    int     _capacity;
public:
    void     add(void);
    void    search(void);
    void    exit();
    void    showTable(void);
    void    setIndex(int num);
    void    setCapacity(int num);
    int     getCapacity(void) const;
};


void    print_line_field(int *field_size, int column_size);
void    print_content_in_field(uint8_t pos, std::string content, size_t size);
void    contact_info(Contact &phoneNumber);
#endif /*__PHONEBOOK__*/

