#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "the memory address of the string variable: " <<&str << std::endl;
    std::cout << "the memory address held by stringPTR: "<<stringPTR << std::endl;
    std::cout << "the mmemory address held by stringREF: " <<&stringREF << std::endl;
    std::cout <<std::endl;
    std::cout << "the value of the string variable: " << str << std::endl;
    std::cout <<"the value pointed to by stringPTR: " <<*stringPTR << std::endl;
    std::cout <<"the value pointed to by stringREF: " << stringREF << std::endl;


    return (0);
}