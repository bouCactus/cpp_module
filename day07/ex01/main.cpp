#include <iostream>
#include "iter.hpp"

std::string sum(std::string n)
{
    std::cout << n << std::endl;
    return (n);
}
int summ(int n)
{
    std::cout << n << std::endl;
    return (n);
}
int main()
{
    std::string arr[2] = {
        "hey", "how"
    };
    int arrint[2] = { 2, 3};
    ::iter<int, 2, summ>(arrint);
    return (0);
}