
#include <iostream>
#include <algorithm>
#include "Span.hpp"


Span::Span(void):
  _arrPtr(nullptr),
  _size(0),
  _currentPos(0){
  std::cout << "Span: defualt constructor called" << std::endl;
}

Span::Span(const Span &copy){
  std::cout << "Span: copy constructor called" << std::endl;
  *this = copy;
}

Span::Span(unsigned int n):
  _arrPtr(new int[n]),
  _size(n),
  _currentPos(0){
  std::cout << "Span: prametrized constructor called" << std::endl;
}

Span::~Span(void){
  std::cout << "Span: destructor called" << std::endl;
}

Span &Span::operator=(const Span &copy){
  if (this != &copy){
    if (_size != copy._size){
      delete[] _arrPtr;
      _arrPtr = nullptr;
      _size = 0;
      _currentPos = 0;
      if (copy._size > 0)
	_arrPtr = new int[copy._size];
      _size = copy._size;
    }
    _currentPos = copy._currentPos;
    std::copy(copy._arrPtr, copy._arrPtr + _size, _arrPtr);
  }
  return (*this);
}

void Span::addNumber(int num){
  if (_currentPos >= _size)
    throw BoundAccess();
  _arrPtr[_currentPos++] = num;
}

const char* Span::BoundAccess::what() const throw(){
  return ("accessing an Span out of bounds");
}

const char* Span::ErrorFinding::what() const throw(){
  return("error trying to found Span");
}
int distance(int first, int last){
  return (abs(first - last));
}

int Span::shortestSpan(void){
  int dist;
  if (_size < 2)
    throw ErrorFinding();
  dist = distance(_arrPtr[0], _arrPtr[1]);
  for (unsigned int i = 0; i < _size; i++){
    for (unsigned int j = i + 1; j < _size ; j++){
      dist = std::min(dist, distance(_arrPtr[i], _arrPtr[j]));
    }
  }
  return (dist);
}

int Span::longestSpan(void){
  if (_size < 2)
    throw ErrorFinding();
  int maxNumber = _arrPtr[0];
  int minNumber = _arrPtr[0];
  for (unsigned int i = 0; i < _size ; i++){
    maxNumber = std::max(maxNumber, _arrPtr[i]);
    minNumber = std::min(minNumber, _arrPtr[i]);
  }
  return (maxNumber - minNumber);
}
