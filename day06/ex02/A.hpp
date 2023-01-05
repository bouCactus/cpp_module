

#ifndef __A_H__
#define __A_H__
#include "Base.hpp"
#include <iostream>
class A : public Base{
public:
  A(){
    std::cout << "A constructor" << std::endl;
  };
  ~A(){};
};
#endif
