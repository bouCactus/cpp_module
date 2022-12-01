#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    ClapTrap one;
    ClapTrap two("i am two");
    ClapTrap three(two);

    std::cout << three.getName() << std::endl;// getName not impliemnted
    return (0);
}