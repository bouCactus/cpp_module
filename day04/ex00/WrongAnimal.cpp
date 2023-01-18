#include "Animal.hpp"
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():
_type("undefind type WrongAnimal"){
  std::cout  << "WrongAnimal: defluat constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type){
  std::cout << "WrongAnimal: parameterized constructor " << std::endl;
}

WrongAnimal::~WrongAnimal(){
  std::cout << "WrongAnimal: distructor called" << std::endl;
}

void WrongAnimal::setType(const std::string &type){
  this->_type = type;
}

std::string WrongAnimal::getType(void) const{
  return (this->_type);
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
  *this = copy;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &copy){
    if (this != &copy){
      this->_type = copy._type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const{
  std::cout << this->_type << ": undefind sound" << std::endl;
}
