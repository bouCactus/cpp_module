
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

bool isValidToken(std::stack<int>& s, char ch){
  if (isdigit(ch) || (isArithmetic(ch) && s.size() == 2))
    return (true);
  std::cerr << "Error: at: " << "\'" << ch << "\'" <<  std::endl;
    std::exit(1);
  return (false);
}
void addTopNumbers(std::stack<int>& s){
  int firstnum;
  int secondnum;

  firstnum = s.top();
  s.pop();
  secondnum = s.top();
  s.pop();
    std::cout << "debug: " << firstnum << "+" << secondnum << std::endl;
  s.push(secondnum + firstnum);
}

void subtractTopNumbers(std::stack<int>& s){
  int firstnum;
  int secondnum;

  firstnum = s.top();
  s.pop();
  secondnum = s.top();
  s.pop();
    std::cout << "debug: " << firstnum << "-" << secondnum << std::endl;
  s.push(secondnum - firstnum);
}

void multiplyTopNumbers(std::stack<int>& s){
  int firstnum;
  int secondnum;

  firstnum = s.top();
  s.pop();
  secondnum = s.top();
  s.pop();
  std::cout << "debug: " << firstnum << "*" << secondnum << std::endl;
  s.push(secondnum * firstnum);
}

void divideTopNumbers(std::stack<int>& s){
  int firstnum;
  int secondnum;

  firstnum = s.top();
  s.pop();
  secondnum = s.top();
  s.pop();
  std::cout << "debug: " << firstnum << "/" << secondnum << std::endl;
  s.push(secondnum / firstnum);
}

void pushNumber(std::stack<int>& s, char ch){
  std::string str(1, ch);
  if (s.size() >= 2){
    std::cerr << "Error: Number: at: " << "\'" << ch<< "\'" <<  std::endl;
    std::exit(1);
  }
  s.push(std::stoi(str));
}
void calculateNumber(std::string str){
  int pos = 0;
  std::stack<int> s;
  while (!str.empty()){
    str = skipWaitScapes(str);
    if (isValidToken(s, str[0])){
      if (str[pos] == PLUS){
	addTopNumbers(s);
      }else if (str[0] == MINS){
	subtractTopNumbers(s);
      }else if (str[0] == TIMES){
	multiplyTopNumbers(s);
      }else if (str[0] == DIVISION){
	divideTopNumbers(s);
      }else{
	pushNumber(s, str[0]);
      }
    }
    str = str.substr(1);
  }
  //print the result
  std::cout << s.top() << std::endl;
}
int main(int argc, char *argv[]){
  if (argc != 2){
    std::cerr << "Error: argc"<< std::endl;
    return (1);
  }
  calculateNumber(argv[1]);
}
