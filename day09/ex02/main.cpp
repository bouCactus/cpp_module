/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:54:12 by aboudarg          #+#    #+#             */
/*   Updated: 2023/04/05 12:54:13 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"
bool isValidNumber(char *str){
   while (*str) {
    if (!isdigit(*str)) {
      return 1;
    }
    str++;
   }
   return (0);
}
int main(int argc, char* argv[])
{
  std::vector<int> v;
  std::list<int> l;

    if(argc < 2)
    {
      std::cout << "Error: No sequence provided" << std::endl;
        return 1;
    }

    for(int i = 1; i < argc; ++i)
    {
        int num = atoi(argv[i]);
	std::vector<int>::iterator it = std::find(v.begin(), v.end(), num);
        if(num < 0 || (num == 0 && strlen(argv[i]) != 1)
	   || isValidNumber(argv[i]) || it != v.end())
        {
	  std::cout << "Error: Invalid input " << argv[i] << std::endl;
            return 1;
        }

        v.push_back(num);
        l.push_back(num);
    }

    std::cout << "Before: ";
    copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::cout.precision(5);
    // using vector for sort
    clock_t t1 = clock();
    PmergeMe::sort(v, 0, v.size() - 1);
    double time = static_cast<double>(clock() - t1) / CLOCKS_PER_SEC;
    std::cout << "After: ";
    copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " <<std::fixed << time << " us" << std::endl;

    // using list for sort
    clock_t t2 = clock();
    PmergeMe::sort(l);
    time  = static_cast<double>(clock() - t2) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << l.size() << " elements with std::list : " <<std::fixed<< time << " us" << std::endl;

    return 0;
}

