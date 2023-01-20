/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:14:37 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/20 16:14:38 by aboudarg         ###   ########.fr       */
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
    RobotomyRequestForm(std::string name, int signRequired, int executionRequired);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
    void executeRequest(std::string target)const ;
private:     
};

#endif //__ROBOTOMYREQUESTFORM_H__