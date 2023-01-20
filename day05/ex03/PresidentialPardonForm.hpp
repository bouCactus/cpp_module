/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:15:38 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:39 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm: public Form{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(std::string name, int signRequired, int executionRequired);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
    void executeRequest(std::string target)const ;
private:     
};

#endif