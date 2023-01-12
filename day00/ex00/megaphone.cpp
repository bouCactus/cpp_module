#include <iostream>

int main(int argc, char *argv[])
{
  int inner;
  int outer;

  if (argc == 1){
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (1);
  }
  outer = 1;
  while (argv[outer]){
    inner = 0;
    while (argv[outer][inner]){
      if (isalpha(argv[outer][inner]))
        std::cout << (char)toupper(argv[outer][inner]);
      else
        std::cout << (char)argv[outer][inner];
      inner++;
    }
    outer++;
  }
  std::cout << std::endl;
  return (0);
}
