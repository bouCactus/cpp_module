#include<iostream>
#include <exception>

class Exceptionme : public std::exception
{
public:
    const char * what() const throw()
    {
        return ("this is an exception!");
    }
};

int main()
{
    int a = 20;
    int e = 30;
    try
    {
        // throw Exceptionme();
        // Exceptionme();
        // throw std::runtime_error("an error occurred!");
        // throw "an error";
        // throw 30;
    //     e = 200;
    //    std::cout << "something:" <<e << std::endl;
    //     if (a == 20)
    //         throw 20;
    //     std::cout << "the end of block" << std::endl;
    try{
        // throw 500;
    }
    catch(int n)
    {
        throw 500;
    }
        
    }
    catch(int ed)
    {
        std::cout << "outside :" << e << std::endl;
        std::cout << "exception :" << ed << std::endl;
    }
    catch(...)
    {
        std::cout << "something" << std::endl;
    }
    // std::cout << e << std::endl;
    return (0);
}