/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:39:09 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 17:39:10 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__
#include<iostream>
// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //
class Contact {
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNum;
    std::string _darkestSecret;

public:
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNum();
    std::string getDarkestSecret();

    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickname(std::string nickname);
    void setPhoneNum(std::string phoneNum);
    void setDarkestSecret(std::string darkSecret);
};
#endif /* __CONTACT_H__ */
