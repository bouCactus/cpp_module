

#ifndef __B_H__
#define __B_H__
#include "Base.hpp"
#include <iostream>
class B: public Base{
public:
  B(){
    std::cout << "B constructor" << std::endl;
  };
  ~B(){};
};
#endif
