

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__
#include <iostream>

class WrongAnimal{

public:
   WrongAnimal();
    WrongAnimal(const Animal &obj);
    WrongAnimal(const std::string type);
    ~WrongAnimal();
    void setType(const std::string &type);
    std::string getType( void ) const;
    void makeSound( void ) const;

protected:
    std::string _type;
};

#endif