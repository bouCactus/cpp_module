/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:58:30 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/25 14:58:31 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"
#include <array>

#define MAX_SIZE 5
int main()
{
    Array<int> arr(MAX_SIZE);

    std::cout << std::endl << std::endl;
    srand(time(NULL));
    for(int i = 0; i < 5 ; i++)
        arr[i] = rand() % 100;
    {
        Array<int> tmp(arr);
        for(size_t i = 0; i < tmp.size(); i++)
            std::cout << tmp[i] << std::endl;
        Array<int> tmp2(MAX_SIZE);
        tmp2 = tmp;
        for(size_t i = 0; i < tmp.size(); i++)
            std::cout << tmp[i] << std::endl;
    }
    try{
        arr[-43] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try{
        arr[MAX_SIZE] = 0; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}