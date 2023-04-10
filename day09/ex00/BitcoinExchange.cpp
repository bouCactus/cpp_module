/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudarg <aboudarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:53:44 by aboudarg          #+#    #+#             */
/*   Updated: 2023/04/10 13:37:48 by aboudarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


void BitcoinExchange::processData(){
  std::ifstream file("./data.csv");
  if (!file){
    std::cout << "Error: could not read from data" << std::endl;
    std::exit(1);
  }
  parseDataFile(file, _m);
  file.close();
}

void BitcoinExchange::getBitcoinValueOnDate(){
  std::ifstream file(_inputFile);
  if (!file){
    std::cout << "Error: could not open file." << std::endl;
    std::exit(1);
  }
  parseInputFile(file, _m);
  file.close();
}


// trim from end of string (right)
inline std::string& BitcoinExchange::rtrim(std::string& s){
    s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1);
    return s;
}

// trim from beginning of string (left)
inline std::string& BitcoinExchange::ltrim(std::string& s){
    s.erase(0, s.find_first_not_of(" \t\n\r\f\v"));
    return s;
}

// trim from both ends of string (right then left)
inline std::string& BitcoinExchange::trim(std::string& s){
    return ltrim(rtrim(s));
}

std::pair<std::string, std::string> BitcoinExchange::split(std::string s, char del){
    std::stringstream ss(s);
    std::string word;
    std::string tokens[2];
    for (int i = 0; i < 2 && std::getline(ss, word, del); ++i) {
        tokens[i] = trim(word);
    }
    if (getline(ss, word, del))
      throw std::invalid_argument("Bad input => " + tokens[0]);
    return (std::make_pair(tokens[0],tokens[1]));
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool BitcoinExchange::isValidDate(const std::string& dateStr) {
  if (dateStr.length() != 10) {
    std::cerr << "Error: bad input => " << dateStr << std::endl;
    return false;
  }

  for (int i = 0; i < 10; i++) {
    if ((i == 4 || i == 7) && dateStr[i] != '-') {
      std::cerr << "Error: bad input => " << dateStr << std::endl;
      return false;
    }
    if (i != 4 && i != 7 && !isdigit(dateStr[i])) {
      std::cerr << "Error: bad input => " << dateStr << std::endl;
      return false;
    }
  }

  int year, month, day;
  std::istringstream(dateStr.substr(0, 4)) >> year;
  std::istringstream(dateStr.substr(5, 2)) >> month;
  std::istringstream(dateStr.substr(8, 2)) >> day;

  if (year < 1900 || year > 9999 || month < 1 || month > 12 || day < 1) {
    std::cerr << "Error: bad input => " << dateStr << std::endl;
    return false;
  }

  const int daysInMonth = (month == 2) ? (isLeapYear(year) ? 29 : 28) : ((month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31);
  if (day > daysInMonth) {
    std::cerr << "Error: bad input => " << dateStr << std::endl;
    return false;
  }
  
  return true;
}

bool BitcoinExchange::isNumeric(const std::string& str) {
  size_t n_nm, n_pt;
  std::size_t char_pos(0);
  for (n_nm = 0, n_pt = 0; std::isdigit(str[char_pos]) || str[char_pos] == '.' || str[char_pos] == '-'; ++char_pos) {
    str[char_pos] == '.' ? ++n_pt : ++n_nm;
  }
  if (n_pt>1 || n_nm<1 || (n_nm + n_pt) != str.length()) // no more than one point, at least one digit
    return (false);
  return (true);
}

bool BitcoinExchange::isValidNumber(const std::pair<std::string, std::string>& token){
  if (token.second.empty() || !isNumeric(token.second)){
    std::cerr << "Error: bad input => " + token.first << std::endl;
    return (false);
  }
  return (true);
}

bool BitcoinExchange::isValidNumberInput(const std::pair<std::string, std::string>& token){
  try{
    float num = std::stof(token.second);
    if (num > 1000){
      std::cerr << "Error: too large a number." << std::endl;
      return (false);
    }
    if (num < 0){
      std::cerr << "Error: not a positive number." << std::endl;
      return (false);
    }

  }catch(const std::invalid_argument& e){
    std::cerr << "Error: bad input => "<< token.first << std::endl;
    return (false);
  }
  return (true);
}

int BitcoinExchange::isValidToken(const std::pair<std::string, std::string>& token){
  return (isValidDate(token.first) && isValidNumber(token));
}

std::map<std::string, float>::iterator
BitcoinExchange::get_date_before(std::map<std::string, float>& m, const std::string& date) {
  std::map<std::string, float>::iterator it = m.lower_bound(date);
  if (it == m.begin()) {
    return m.begin();
  } else {
    --it;
    return it;
  }
}

void BitcoinExchange::caluclateBtcValue(std::map<std::string, float>&m,std::pair<std::string, float>token){
  std::map<std::string, float>::iterator it;
  it = m.find(token.first);
  if (it == m.end())
    it = get_date_before(m, token.first);
  if (it != m.end()){
  std::cout << token.first << " => "
	    << token.second
	    << " = "
	    << it->second * token.second
	    <<std::endl;
  }else{
  std::cout << token.first << " => "
	    << token.second
	    << " = "
	    << 0
	    <<std::endl;  
  }
}

void BitcoinExchange::parseDataFile(std::ifstream &file, std::map<std::string, float>& m){
  std::string line;
  bool isFirstLine = true;
  std::pair<std::string, std::string> token;
  while  (getline(file, line)){
    if (line.empty())
      continue;
    try{
      token = split(line, ',');
    }catch(std::exception& e ){
      std::cerr << "Error " << e.what() << std::endl;
    }
    if (isFirstLine && token.first == "date" && token.second == "exchange_rate" )
      isFirstLine = false;
    else{
      if(!isValidToken(token)){
	std::cerr << "Error: database: invalid token format\n";
	std::exit(1);
      }
      m.insert(std::make_pair(token.first, std::stof(token.second)));
    }
    isFirstLine = false;
  }
}

void BitcoinExchange::parseInputFile(std::ifstream& file, std::map<std::string, float>&m){
  std::string line;
  bool isFirstLine = true;
  std::pair<std::string, std::string> token;
  
  while (getline(file,line)){
    if (line.empty())
      continue;
    try{
      token = split(line, '|');
    }catch(std::exception& e ){
      std::cerr << "Error: " << e.what() << std::endl;
      continue;
    }
    if (isFirstLine && token.first == "date" && token.second == "value")
      isFirstLine = false;
    else if (isValidToken(token) && isValidNumberInput(token) ){
      caluclateBtcValue(m, std::make_pair(token.first,std::stof(token.second)));
    }
    isFirstLine = false;
  
  }
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(std::string filename):_inputFile(filename){}

BitcoinExchange::BitcoinExchange(void){}
