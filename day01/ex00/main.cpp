#include<iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *voodoo;

    voodoo = newZombie("Voodoo");
    voodoo->announce();
    randomChump("Romero");
    delete voodoo;
    return (0);
}