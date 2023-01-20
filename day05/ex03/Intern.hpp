/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:15:11 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:12 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
    Form *makeForm(std::string name, std::string target);
    int hashit(std::string name);
    struct FormNotFound : public std::exception{
        const char *what() const throw();
    };
};
#endif