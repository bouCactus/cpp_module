/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:54:21 by aboudarg          #+#    #+#             */
/*   Updated: 2023/04/05 12:54:22 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __PMERGEME_H__
#define __PMERGEME_H__

#include <iostream>
#include <vector>
#include <list>

class PmergeMe{
public:
  
  PmergeMe(void) {}
  ~PmergeMe(void) {}
  PmergeMe(const PmergeMe& other);
  PmergeMe& operator= (const PmergeMe& other);
  
  static void           sort(std::list<int>& lst);
  static void           sort(std::vector<int>& arr, int left, int right);
  static std::list<int> merge(std::list<int> a, std::list<int>b);
  static void           merge(std::vector<int>& arr, int left, int mid, int right);
  static void           insertionSort(std::list<int>& Lst);
  static void           insertionSort(std::vector<int>& arr, int p, int q);
private:
  static const int K;
  
};

#endif // __PMERGEME_H__
