/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:15:45 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:46 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(std::string name, int signRequired, int executionRequired);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
    void executeRequest(std::string target)const ;
private:     
};

#endif