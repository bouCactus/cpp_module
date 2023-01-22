
#ifndef __SPAN_H__
#define __SPAN_H__
#include <iostream>


class Span{
public:
  Span(void);
  Span(const Span &copy);
  Span(unsigned int n);
  ~Span(void);
  
  Span &operator=(const Span &copy);
  void addNumber(int num);
  int shortestSpan(void);
  int longestSpan(void);
  struct BoundAccess: std::exception{
    const char *what() const throw();
  };
  struct ErrorFinding: std::exception{
    const char* what() const throw();
  };
private:
  int           *_arrPtr;
  unsigned int  _size;
  unsigned int  _currentPos;
};

int distance(int first, int lasat);
#endif
