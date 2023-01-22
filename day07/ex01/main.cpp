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



int main()
{
    std::string arr[5] = {
        "hey", "how", "me", "you"};
    // int arrint[2] = { 2, 3};
    iter<std::string>(arr, 5, print);
    iter<std::string>(arr, 5, printWithWow);

    return (0);
}