
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
  Base *objs;

  objs = generate();

  identify(objs);
  identify(*objs);
  return (0);
}
