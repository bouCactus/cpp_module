/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:37:47 by aboudarg          #+#    #+#             */
/*   Updated: 2023/01/24 15:37:48 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>
#include <cmath>
#include <cfloat>
#include <iomanip>
#include <climits>
#include <cstring>

void character(char c , double flag){
    if ( flag > 255 || flag < 0
       || isnan(flag) || isfinite(flag) == 0)
    std::cout << "char: impossible" << std::endl;
  else if (!isprint(c))
    std::cout << "char: Non displayable" << std::endl;
  else
    std::cout << "char: " << c << std::endl;
}

void integer(int num, double flag){
  if (flag > INT_MAX || flag < INT_MIN
      || isnan(flag) || isfinite(flag) == 0)
    std::cout << "int: impossible" << std::endl;
  else
  std::cout << "int: " << num << std::endl;
}

void con_float(float num){
  if ((num - static_cast<int>(num)) == 0)
      std::cout << std::setprecision(1) << std::fixed;
  std::cout << "float: " << num << "f" << std::endl;
}

void con_double(double num){
  std::cout << "double: " << num << std::endl;
}

bool checknum(char *str){
  size_t i;
  int pre;
  
  i = 0;
  pre = 0;
  if (str[i] == '+' || str[i] == '-')
    i++;
  while ((isdigit(str[i]) || str[i] == '.') && pre < 2){
    if (str[i] == '.')
      pre++;
    i++;
  }
  if (str[i] == 'f' && pre < 2)
          i++;
  return (i == strlen(str));
}

bool data_words(char *str){
  int i;
  std::string dataWord = std::string(str);
  std::string words[12] = {
    "nan","-nan", "+nan", "nanf" , "-nanf", "+nanf",
    "inf","-inf", "+inf", "inff", "-inff" , "+inff"};
  i = 0;
  while (i < 12 && dataWord.compare(words[i]))
    i++;

  return (i != 12);

}

double checkinput(char *str){
  if (isprint(*str) && !isdigit(*str) && strlen(str) == 1)
      return (static_cast<double>(*str));      
  else if  (!checknum(str) && !data_words(str)){
      std::cout << "Validation of input field" << std::endl;
      std::exit(1);
  }
  return (static_cast<double>(std::atof(str)));
}

int main(int argc, char *argv[]){
  double number;
  
  if (argc == 2){
    std::cout << "======================================================" << std::endl;
    number = checkinput(argv[1]);
    character(static_cast<char>(number), number);
    integer(static_cast<int>(number), number);
    con_float(static_cast<float>(number));
    con_double(static_cast<double>(number));
  }
  else
    std::cout << "[program name] [string parameter]" << std::endl;
  return (0);
}
