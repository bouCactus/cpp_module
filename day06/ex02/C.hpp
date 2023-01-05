
#ifndef __C_H__
#define __C_H__
#include "Base.hpp"
#include <iostream>
class C : public Base{
public:
  C(){
    std::cout << "C constructor" << std::endl;
  };
  ~C(){};
};
#endif
