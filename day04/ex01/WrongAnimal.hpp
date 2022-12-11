

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__
#include <iostream>

class WrongAnimal{

public:
   WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal(const std::string type);
    ~WrongAnimal();
    WrongAnimal &operator= (const WrongAnimal &copy);
    void setType(const std::string &type);
    std::string getType( void ) const;
    void makeSound( void ) const;

protected:
    std::string _type;
};

#endif