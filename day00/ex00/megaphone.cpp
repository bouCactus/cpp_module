/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:39:21 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/13 17:39:22 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
  int inner;
  int outer;

  if (argc == 1){
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (1);
  }
  outer = 1;
  while (argv[outer]){
    inner = 0;
    while (argv[outer][inner]){
      if (isalpha(argv[outer][inner]))
        std::cout << (char)toupper(argv[outer][inner]);
      else
        std::cout << (char)argv[outer][inner];
      inner++;
    }
    outer++;
  }
  std::cout << std::endl;
  return (0);
}
