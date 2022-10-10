#include"Zombie.hpp"
#include<iostream>


Zombie::Zombie()
{
    std::cout << "Zombie is created"<< std::endl;
}
Zombie::Zombie(std::string name):_name(name)
{
    std::cout << _name << ": is created" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << _name << ": is deleted" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}


