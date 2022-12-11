#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete j;//should not create a leak
    delete i;

    std::cout << std::endl;

    const WrongAnimal* i2 = new WrongCat();
    const Animal* j2 = new Dog();

    std::cout << std::endl;

    delete i2;
    delete j2;


return 0;
}