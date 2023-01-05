#include <exception>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
  srand(time(0));
  int number = rand() % 3;
   if (number == 1)
    return (new A());
  else if (number == 2)
    return (new B());
  return (new C());
}

void identify(Base* p)
{
  A *a;
  B *b;
  C *c;

  a = dynamic_cast<A*>(p);
  b = dynamic_cast<B*>(p);
  c = dynamic_cast<C*>(p);
  if (a != nullptr)
    std::cout << "this type: A" << std::endl;
  else if (b != nullptr)
    std::cout << "this type: B" << std::endl;
  else if (c != nullptr)
    std::cout << "this type: C" << std::endl;
}
void identify(Base& p)
{
  
  try
    {
      A& a __attribute__ ((unused)) = dynamic_cast<A&>(p);
      std::cout << "this type: A" << std::endl;
    }
  catch(std::exception &e)
    {
      try
	{
	  B& b __attribute__ ((unused)) = dynamic_cast<B&>(p);
	  std::cout << "this type: B" << std::endl;
	}
      catch(std::exception &e)
	{
	  try
	    {
	      C& c __attribute__((unused)) = dynamic_cast<C&>(p);
	      std::cout << "this type C" << std::endl;
	    }
	  catch(std::exception &e)
	    {}
	}
    }
  
 }
