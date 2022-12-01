#include "Animal.hpp"
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "defualt constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal & obj)
{

}
WrongAnimal::~WrongAnimal()
{
    std::cout << "distructor called" << std::endl;
}