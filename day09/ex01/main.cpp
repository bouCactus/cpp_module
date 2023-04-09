/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:54:06 by aboudarg          #+#    #+#             */
/*   Updated: 2023/04/09 17:01:52 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#define PLUS '+'
#define MINS '-'
#define TIMES '*'
#define DIVISION '/'

inline std::string& skipWaitScapes(std::string& str){
  str.erase(0, str.find_first_not_of(" \t\n\r\f\v"));
  return (str);
}

bool isArithmetic(char ch){
  return ((ch == '+') || ch == '-'
	  || ch == '*' || ch == '/');
 }

bool isValidToken(char ch){
  if (isdigit(ch) || (isArithmetic(ch)))
    return (true);
  throw std::invalid_argument(" Not valid input");
  return (false);
}

void performOperation(std::stack<int>& s, char op){
  int firstNum, secondNum;

  if (s.size() < 2){
    throw std::invalid_argument("Not enough numbers in stack");
  }

  secondNum = s.top();
  s.pop();
  firstNum = s.top();
  s.pop();

  switch(op){
    case PLUS:
      s.push(firstNum + secondNum);
      break;
    case MINS:
      s.push(firstNum - secondNum);
      break;
    case TIMES:
      s.push(firstNum * secondNum);
      break;
    case DIVISION:
      if (secondNum == 0){
        throw std::invalid_argument("Divide by zero");
      }
      s.push(firstNum / secondNum);
      break;
    default:
      break;
  }
}
void calculateNumber(std::string str){
  std::stack<int> s;

  for(std::string::size_type i = 0 ; i < str.size() ; i++){
    if (str[i] == ' ')
      continue;
    if (isValidToken(str[i])){
      if (isArithmetic(str[i])){
	performOperation(s, str[i]);
      }else{
	s.push(str[i] - '0');
      }
    }
  }
  //print the result
  if (s.size() > 1 || s.size() <= 0)
    throw std::invalid_argument("Invalid input too many or less Number in stack");
  std::cout << s.top() << std::endl;
}
int main(int argc, char *argv[]){
  try{
    
    if (argc != 2)
      throw std::invalid_argument("Invalid number of arguments");
   calculateNumber(argv[1]);
  }catch(std::exception& e ){
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return (0);
}

