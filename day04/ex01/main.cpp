#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << std::endl;
    // delete j;//should not create a leak
    // delete i;

    // std::cout << std::endl;

    // const WrongAnimal* i2 = new WrongCat();
    // const Animal* j2 = new Dog();

    // std::cout << std::endl;

    // delete i2;
    // delete j2;
//------------------------------------------------
    Animal **animals = new Animal*[10];
//    Animal *animals[10]; 
    for(int i = 0 ; i < 10 ; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << "----------------------------------------" << std::endl;
    for(int j = 0 ; j  < 10 ; j++)
    {
        delete animals[j];
    }




return 0;
}