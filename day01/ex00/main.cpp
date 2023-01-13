#include<iostream>
#include "Zombie.hpp"

int main()
{
    Zombie *voodoo;
    Zombie *deathMan;

    voodoo = newZombie("Voodoo");
    deathMan = newZombie("deathMan");
    voodoo->announce();
    deathMan->announce();
    randomChump("Romero");
    randomChump("fozenZombie");
    delete deathMan;
    delete voodoo;
    return (0);
}