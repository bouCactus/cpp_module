
#ifndef __SPAN_H__
#define __SPAN_H__
#include <iostream>
#include <vector>

class Span{
public:
  Span(void);
  Span(const Span &copy);
  Span(unsigned int n);
  ~Span(void);
  
  Span &operator=(const Span &copy);
  void addNumber(int num);
  int  shortestSpan(void);
  int  longestSpan(void);
  void addRange(std::vector<int>::iterator begin,
			std::vector<int>::iterator end);
  struct BoundAccess: std::exception{
    const char *what() const throw();
  };
  struct ErrorFinding: std::exception{
    const char* what() const throw();
  };
private:
  size_t _size;
  std::vector<int> _span;
};

int distance(int first, int lasat);
#endif
