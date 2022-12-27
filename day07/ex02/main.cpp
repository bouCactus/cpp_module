
#include <iostream>
#include "Array.hpp"
#include <array>
class A{
public:
    A(void)
    {
        std::cout << "A defualt constructor called" << std::endl;
    }
    int _x;
};

int main()
{
    // Array<A> arr(5);
    // Array<A> arr;
    // Array<int> arr(3);
    // try
    // {
    //     arr[0] = 2;
    //     arr[1] = 3;
    //     std::cout << arr[1] << std::endl;
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << arr << std::endl;
    // std::cout << arr[0] << std::endl;
    Array<int> arr(5);
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 4;
    Array<int> arr2;
    arr2 = arr;
    std::cout << arr2.size() <<std::endl;
    try
    {
        std::cout << arr2[0] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}