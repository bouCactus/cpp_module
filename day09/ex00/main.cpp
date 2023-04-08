/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:53:56 by aboudarg          #+#    #+#             */
/*   Updated: 2023/04/05 12:53:56 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]){
  if (argc != 2){
    std::cout << "Error: could not open file." << std::endl;
    return (1);
  }
  BitcoinExchange btc(argv[1]);

  btc.processData();
  btc.getBitcoinValueOnDate();

  return (0);
}
