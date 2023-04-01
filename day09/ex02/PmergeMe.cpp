#include "PmergeMe.hpp"



PmergeMe::PmergeMe(){
  
}
PmergeMe::~PmergeMe(){
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

void PmergeMe::merge_insertionSort(std::vector<int>& arr, int left, int right) {
    if (right - left > K) {
        int mid = (left + right) / 2; 
        merge_insertionSort(arr, left, mid);
        merge_insertionSort(arr, mid + 1, right); 
        merge(arr, left, mid, right);
    } else {
        insertionSort(arr, left, right);
    }
}
// int main() {
//     vector<int> v= { 2, 5, 1, 6, 7, 3, 8, 4, 9 };
//     merge_insertionSort(v, 0, v.size());
//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// _____________________________________________


void PmergeMe::insertionSort(std::set<int>& s,
			     std::set<int>::iterator p,
			     std::set<int>::iterator q) {
  for (std::set<int>::iterator i = p; i != q; i++) {
        int tempVal = *(i);
	std::set<int>::iterator j = i;
        while (j != p && *(std::prev(j)) > tempVal) {
            int prevVal = *(std::prev(j));
            s.erase(std::prev(j));
            s.insert(tempVal);
            tempVal = prevVal;
            j = std::prev(j);
        }
        s.erase(j);
        s.insert(tempVal);
    }
}

void PmergeMe::merge(std::set<int>& s, int left, int mid, int right) {
    int i, j, d;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    i = 0;
    for (std::set<int>::iterator it = s.begin(); i < n1; ++i, ++it)
        L[i] = *it;

    j = 0;
    for (std::set<int>::iterator it = std::next(s.begin(), n1); j < n2; ++j, ++it)
        R[j] = *it;

    i = 0;
    j = 0;
    d = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            s.erase(s.find(L[i]));
            s.insert(L[i]);
            ++i;
        }
        else {
            s.erase(s.find(R[j]));
            s.insert(R[j]);
            ++j;
        }
    }

    while (i < n1) {
        s.erase(s.find(L[i]));
        s.insert(L[i]);
        ++i;
    }

    while (j < n2) {
        s.erase(s.find(R[j]));
        s.insert(R[j]);
        ++j;
    }
}

void PmergeMe::merge_insertionSort(std::set<int>& s, int left, int right) {
  if (right - left > PmergeMe::K) {
        int q = (left + right) / 2;
        merge_insertionSort(s, left, q);
        merge_insertionSort(s, q + 1, right);
        merge(s, left, q, right);
    } else {
      std::vector<int> arr(s.begin(), s.end());
        insertionSort(s, std::next(s.begin(), left), std::next(s.begin(), right));
        s = std::set<int>(arr.begin(), arr.end());
    }
}

// int main() {
//     vector<int> v= { 2, 5, 1, 6, 7, 3, 8, 4, 9 };
//     set<int> s(v.begin(), v.end());
//     merge_insertionSort(s, 0, s.size());
//     for (auto it = s.begin(); it != s.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;
//     return 0;
// }


