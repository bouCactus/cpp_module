
#ifndef __ARRAY_H__
#define __ARRAY_H__
#include <iostream>
#include <cstring>

template <typename T>
class Array
{
public:
    Array(void);
    Array(unsigned int n);
    Array(const Array<T> &copy);
    ~Array(void);
    Array &operator=(const Array &copy);
    T &operator[](int i) const;
    size_t size() const throw();
    struct UnderFlowException : public std::exception
    {
        const char *what() const throw();
    };
    struct OverFlowException : public std::exception
    {
        const char *what() const throw();
    };
  struct SizeNotcompatible : public std::exception{
    const char *what() const throw();
  };

private:
    T *_arr;
    size_t _size;
};

template <typename T>
Array<T>::Array() :
_arr(new T[0]()),
_size(0)
{
    std::cout << "Array defualt constructor called" << std::endl;
};

template <typename T>
Array<T>::Array(unsigned int n) : 
_arr(new T[n]()), 
_size(n)
{
    std::cout << "Array parametrized constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array(void)
{
    std::cout << "Array destructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    std::cout << "Array copy constructor called" << std::endl;
    _arr = new T[copy._size];
    _size = copy._size;
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
    std::cout << "Array copy assignement called" << std::endl;
    if (this != &copy){
      if (_size != copy._size)
	throw Array<T>::SizeNotcompatible();
      for (size_t i = 0; i < copy._size; i++){
	this->_arr[i] = copy[i];
      }
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](int i) const
{
    if (i >= (int)this->_size)
        throw Array<T>::OverFlowException();
    if (i < 0)
        throw Array<T>::UnderFlowException();
    return (*(this->_arr + i));
}

template <typename T>
size_t Array<T>::size(void) const throw()
{
    return (_size);
}

template <typename T>
const char *Array<T>::UnderFlowException::what() const throw()
{
    return ("error: underflow :: index is out of bounds");
}

template <typename T>
const char *Array<T>::OverFlowException::what() const throw()
{
    return ("error: overflow :: index is out of bounds");
}
template <typename T>
const char *Array<T>::SizeNotcompatible::what() const throw(){
  return ("size not compatible");
}
#endif // __ARRAY_H__
