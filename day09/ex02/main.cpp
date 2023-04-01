#include <iostream>
#include "PmergeMe.hpp"
#include <set>
int main(int argc, char *argv[]) {
  std::vector<int> v;
  v.push_back(2);
  v.push_back(5);
  v.push_back(1);
  v.push_back(6);
  v.push_back(7);
  v.push_back(3);
  v.push_back(8);
  v.push_back(4);
  v.push_back(9);
  (void)argc;
  (void)argv;
  PmergeMe sort;
  std::set<int> s(v.begin(), v.end());
  sort.merge_insertionSort(v, 0, v.size());
  for (size_t i = 0; i < v.size(); i++) {
    std::cout << v[i] << " ";
    }
  std::cout << "-----------------" << std::endl;
  for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it) {
     std::cout << *it << " ";
    }
   sort.merge_insertionSort(s, 0, s.size());
   std::cout << "-------------" << std::endl;
   for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it) {
     std::cout << *it << " ";
    }
    return 0;
}

