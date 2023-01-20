/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:12:50 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:12:51 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__
#include <iostream>
#include <exception>

class Bureaucrat{
public:
    Bureaucrat(void);
    Bureaucrat(const Bureaucrat &other);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat(void);
    Bureaucrat &operator= (const Bureaucrat &other);
    std::string getName(void)const;
    int         getGrade(void)const;
    void        setName(std::string name);
    void        setGrade(int grade);
    void        incrementGrade(void);
    void        decrementGrade(void);
    struct      GradeTooHighException : public std::exception{
      const char *what()const throw();
    };
    struct      GradeTooLowException : public std::exception{
      const char *what() const throw();
    };
private:
    std::string _name;
    int         _grade;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat &obj);
#endif
