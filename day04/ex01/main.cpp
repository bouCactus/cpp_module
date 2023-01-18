#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    delete j;//should not create a leak
    delete i;
    }

    std::cout << std::endl;

    {
    const WrongAnimal* i = new WrongCat();
    const Animal* j = new Dog();
    
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    delete i;
    delete j;
    }

    {
    Animal **animals = new Animal*[10];
    for(int i = 0 ; i < 10 ; i++){
        std::cout << "----------------------  " << i << " -------------------------" << std::endl;
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;
    for(int j = 0 ; j  < 10 ; j++){
        std::cout << "----------------------  " << j << " -------------------------" << std::endl;  
        delete animals[j];
        std::cout << std::endl;
    }
        delete[] animals;
    }
    return (0);
}