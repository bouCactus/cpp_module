
#include <iostream>
#include <algorithm>
#include "Span.hpp"


Span::Span(void){
  std::cout << "Span: defualt constructor called" << std::endl;
}

Span::Span(const Span &copy){
  std::cout << "Span: copy constructor called" << std::endl;
  
  *this = copy;
}

Span::Span(unsigned int N):
  _size(N){
  std::cout << "Span: prametrized constructor called" << std::endl;
}

Span::~Span(void){
  std::cout << "Span: destructor called" << std::endl;
}

Span &Span::operator=(const Span &copy){
  std::cout << "Span: copy assignment operator called" << std::endl;
  if (this != &copy){
    _span = copy._span;
    _size = copy._size;
  }
  return (*this);
}

void Span::addNumber(int num){
  if ((_span.size()) >= _size)
    throw BoundAccess();
  _span.push_back(num);
}
void Span::addRange(std::vector<int>::iterator begin,
		    std::vector<int>::iterator end){
  if ((_span.size()) >= _size || end - begin >= (long)_size)//check this befor you push
    throw BoundAccess();
    _span.insert(_span.end(), begin, end);
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
  if (_span.size() < 2)
    throw ErrorFinding();
  dist = distance(_span[0], _span[1]);
  for (unsigned int i = 0; i < _span.size(); i++){
    for (unsigned int j = i + 1; j < _span.size() ; j++){
      dist = std::min(dist, distance(_span[i], _span[j]));
    }
  }
  return (dist);
}

int Span::longestSpan(void){
  if (_span.size() < 2)
    throw ErrorFinding();
  int maxNumber = _span[0];
  int minNumber = _span[0];
  for (unsigned int i = 0; i < _span.size() ; i++){
    maxNumber = std::max(maxNumber, _span[i]);
    minNumber = std::min(minNumber, _span[i]);
  }
  return (maxNumber - minNumber);
}
