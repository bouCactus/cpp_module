#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern(void)
{
    std::cout << "Intern: defualt constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    std::cout << "Intern: copy constructor called" << std::endl;
    *this = copy;
}
Intern::~Intern(void)
{
    std::cout << "Intern: destcructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &copy)
{
    if (this != &copy)
    {
        //do nothing becuase nothing to do
    }
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string traget)
{
    Form *form;

    switch(hashit(name))
    {
        case 0:
            form = new PresidentialPardonForm(traget);
            break;
        case 1:
            form = new RobotomyRequestForm(traget);
            break;
        case 2:
            form = new ShrubberyCreationForm(traget);
            break;
        default:
            throw FormNotFound();
    }
    std::cout << "Intern creates " << name << std::endl;
    return form;
    
}
int Intern::hashit(std::string name)
{
      int i;
    std::string str2[3] = {"presidential pardon",
                            "robotomy request",
                             "shrubbery creation"};

    i = 0;
    while (i < 3 && name.compare(str2[i]))
        i++;
    return (i);
}

const char* Intern::FormNotFound::what() const _NOEXCEPT
{
    return ("traget not found!");
}
