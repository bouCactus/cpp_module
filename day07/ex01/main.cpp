#include <iostream>
#include "iter.hpp"

void printWithWow(std::string  &n)
{
    n = n + "wow";
    std::cout << n << std::endl;
}
void print(std::string n)
{
    std::cout << n << std::endl;
}

void printInt(int n)
{
    std::cout << n << std::endl;
}

int main()
{
    std::string arr[5] = {
        "hey", "how", "me", "you"};
    int arrint[5] = { 2, 3,4,5,6};

    iter<std::string>(arr, 5, print);
    std::cout << "------------------------" << std::endl;
    iter<std::string>(arr, 5, printWithWow);
     std::cout << "------------------------" << std::endl;
    iter<int>(arrint,5,printInt);

    return (0);
}