#include <iostream>
#include <string>
#include <cmath>
#include <cfloat>
#include <iomanip>
#include <climits>
void character(char c , double flag)
{
    if ( flag > 255 || flag < 0
       || isnan(flag) || isfinite(flag) == 0)
    std::cout << "char: impossible" << std::endl;
  else if (!isprint(c))
    std::cout << "char: Non displayable" << std::endl;
  else
    std::cout << "char: " << c << std::endl;

}
void integer(int num, double flag)
{
  if (flag > INT_MAX || flag < INT_MIN
      || isnan(flag) || isfinite(flag) == 0)
    std::cout << "int: impossible" << std::endl;
  else
  std::cout << "int: " << num << std::endl;
}
void con_float(float num, double flag)
{
  if ((num - static_cast<int>(num)) == 0)
      std::cout << std::setprecision(1) << std::fixed;
  std::cout << "float: " << num << "f" << std::endl;
}

void con_double(double num)
{
  std::cout << "double: " << num << std::endl;
}

int main(int argc, char *argv[])
{
  double number;
  
  if (argc == 2)
  {
    number = ::atof(argv[1]);
    
    character(static_cast<char>(number), number);
    integer(static_cast<int>(number), number);
    con_float(static_cast<float>(number), number);
    con_double(static_cast<double>(number));
    
  }
  else
    std::cout << "[program name] [string parameter]" << std::endl;
  return (0);
}
