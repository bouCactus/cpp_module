#include <iostream>
#include "MutantStack.hpp"
#include <stack>

int main(void){
  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << mstack.top() << std::endl;
  
  mstack.pop();
  std::cout << mstack.size() << std::endl;

  mstack.push(3);
  mstack.push(5);
  mstack.push(737);

  mstack.push(16);

  MutantStack<int>::iterator it = mstack.begin();// should do it by youslef
  // MutantStack<int>::iterator ite = mstack.end();
  /*
  ++it;// you should do it by yourslef
  --it;
  while (it != ite){
    std::cout << *it << std::endl;
    ++it;
  }
  */
  std::stack<int> s(mstack);
  std::cout << s.top() << std::endl;
    return (0);
}
