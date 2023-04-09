/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:54:18 by aboudarg          #+#    #+#             */
/*   Updated: 2023/04/05 12:54:19 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"



PmergeMe::PmergeMe(const PmergeMe& other){
  (void)other;
}
PmergeMe& PmergeMe::operator= (const PmergeMe& other){
  (void)other;
  return (*this);
}
const int PmergeMe::K = 5;

void PmergeMe::insertionSort(std::vector<int>& arr, int p, int q) {
    for (int i = p; i < q; i++) {
        int tempVal = arr[i + 1];
        int j = i + 1;
        while (j > p && arr[j - 1] > tempVal) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = tempVal;
    }
}


void PmergeMe::merge(std::vector<int>& arr, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::sort(std::vector<int>& arr, int left, int right) {
    if (right - left > K) {
        int mid = (left + right) / 2; 
        sort(arr, left, mid);
        sort(arr, mid + 1, right); 
        merge(arr, left, mid, right);
    } else {
        insertionSort(arr, left, right);
    }
}
// -------------------------------------------------

void PmergeMe::insertionSort(std::list<int>& lst)
{
  std::list<int> sorted;
  std::list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); ++it) {
        if (sorted.empty() || *it <= sorted.front()) {
            sorted.push_front(*it);
        } else if (*it >= sorted.back()) {
            sorted.push_back(*it);
        } else {
	  std::list<int>::iterator insertPos = sorted.begin();
            while (*insertPos < *it) {
                ++insertPos;
            }
            sorted.insert(insertPos, *it);
        }
    }
    lst = sorted;
}

std::list<int> PmergeMe::merge(std::list<int> a, std::list<int> b)
{
  std::list<int> result;
    while (!a.empty() && !b.empty()) {
        if (a.front() <= b.front()) {
            result.push_back(a.front());
            a.pop_front();
        } else {
            result.push_back(b.front());
            b.pop_front();
        }
    }
    while (!a.empty()) {
        result.push_back(a.front());
        a.pop_front();
    }
    while (!b.empty()) {
        result.push_back(b.front());
        b.pop_front();
    }
    return result;
}

void PmergeMe::sort(std::list<int>& lst)
{
    if (lst.size() <= 1) {
        return;
    } else if (lst.size() <= K) {
        insertionSort(lst);
        return;
    } else {
      std::list<int> a, b;
      std::list<int>::iterator it = lst.begin();
        for (size_t i = 0; i < lst.size() / 2; i++) {
            a.push_back(*it);
            it++;
        }
        for (; it != lst.end(); it++) {
            b.push_back(*it);
        }
        sort(a);
        sort(b);
        lst = merge(a, b);
    }
}
