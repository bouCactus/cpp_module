#include<iostream>
#include"Zombie.hpp"


int main()
{
    int n;
    std::string name;
    Zombie* horde;

    std::cout << "Enter the number of zombies in the horde: ";
    std::cin >> n;
    std::cout << "Enter a name for the zombies in the horde: ";
    std::cin >> name;
    horde = zombieHorde(n, name);
    for (int i = 0; i < n; i++){
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}