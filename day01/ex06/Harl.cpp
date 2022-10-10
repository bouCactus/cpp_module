#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
     ketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
std::cout <<    "I cannot believe adding extra bacon costs more money. You didn't put enough\
 bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
 years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
    void    (Harl::*func_ptr)(void) = NULL;
    switch(hashit(level))
    {
        case 0:
            debug();
            break;
        case 1:
            info();
            break;
        case 2:
            warning();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << "this level doesn't exist" << std::endl;
            return ;
    }
    (this->*func_ptr)();
}
int hashit(std::string const &inString)
{
    int i;
    std::string str2[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    i = 0;
    while (i < 4 && inString.compare(str2[i]))
        i++;
    return (i);
}