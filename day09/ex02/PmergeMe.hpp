
#ifndef __PMERGEME_H__
#define __PMERGEME_H__

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
class PmergeMe{
public:
  PmergeMe(void);
  ~PmergeMe();
  PmergeMe(std::set<int>& arr);
  PmergeMe(std::vector<int>& arr);
  PmergeMe(const PmergeMe& other);
  PmergeMe operator= (const PmergeMe& other);

  void merge_insertionSort(std::set<int>& arr, int left, int right);
  void merge_insertionSort(std::vector<int>& arr, int left, int right);
  void merge(std::set<int>& arr, int left, int mid, int right);
  void merge(std::vector<int>& arr, int left, int mid, int right);
  void insertionSort(std::set<int>& arr, std::set<int>::iterator p, std::set<int>::iterator q);
  void insertionSort(std::vector<int>& arr, int p, int q);
private:
  static const int K;
  
};

#endif // __PMERGEME_H__
