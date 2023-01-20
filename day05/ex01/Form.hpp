/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:13:23 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:13:24 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __FORM_H__
#define __FORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include <exception>
class Bureaucrat;
class Form{
public:
    Form(void);
    Form(std::string name, int signRequired, int executionRequired);
    Form(const Form &copy);
    ~Form(void);
    Form    &operator=(const Form &copy);
    void            beSigned(Bureaucrat &obj);
    std::string     getName(void) const;
    bool            getStatus(void) const;
    int             getSignRequired(void) const;
    int             getExecutionRequired(void) const;
    struct      GradeTooHighException : public std::exception
    {
        const char *what()const throw();
    };
    struct      GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
private:
    const std::string   _name;
    bool                _status;
    const int           _signRequired;
    const int           _executionRequired;

};

std::ostream& operator<< (std::ostream& out, const Form &obj);
#endif