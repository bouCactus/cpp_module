#include<iostream>
#include"Zombie.hpp"

int main()
{
    Zombie* voodoo;
    voodoo = zombieHorde(2, "Voodoo");
    for(int i = 0 ; i < 2 ; i++)
        voodoo->announce();
    
    delete[] voodoo;
    return (0);
}