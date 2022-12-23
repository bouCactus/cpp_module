
#ifndef __INTERN_H__
#define __INTERN_H__
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <exception>
class Intern{
public:
    Intern();
    ~Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &copy);
    Form *makeForm(std::string name, std::string traget);
    int hashit(std::string name);
    struct FormNotFound : public std::exception
    {
            const char *what() const _NOEXCEPT;
    };
};
#endif