/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:39:03 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 17:39:04 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"PhoneBook.hpp"

int main()
{
    std::string userCommand;
    PhoneBook   Contacts;

    Contacts.printHelp();
    std::cout << "\033[1;32mcommand: \033[0m";
    while (getline(std::cin, userCommand)){
      if (!userCommand.compare("ADD")){
	        Contacts.addContact();
      }
      else if  (!userCommand.compare("SEARCH"))
	      Contacts.searchContacts();
      else if (!userCommand.compare("EXIT"))  
	      Contacts.exitProgram();
      else
        std::cout << "\033[1;31mInvalid command. Please try again.\033[0m" << std::endl;
      std::cout << "\033[1;32mcommand: \033[0m";
    }
    return (EXIT_SUCCESS);
}
