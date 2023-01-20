/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:15:05 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:06 by aboudarg         ###   ########.fr       */
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
    void            execute(Bureaucrat const & executor) const;
    std::string     getName(void) const;
    bool            getStatus(void) const;
    int             getSignRequired(void) const;
    int             getExecutionRequired(void) const;
    virtual void    executeRequest(std::string target) const = 0;
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