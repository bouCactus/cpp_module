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
    return (std::make_pair(tokens[0],tokens[1]));
}

bool BitcoinExchange::isValidDate(const std::string& dateStr) {

    try {
      if (dateStr.size() != 10) {  // Check length
        throw std::invalid_argument("Error: bad input => " + dateStr);
      }

        int year = std::stoi(dateStr.substr(0, 4));  
        int month = std::stoi(dateStr.substr(5, 2)); 
        int day = std::stoi(dateStr.substr(8, 2));  

        if (year < 1900 || year > 9999
	    || month < 1 || month > 12 || day < 1 || day > 31) {
	  throw std::invalid_argument("Error: bad input => " + dateStr);
        }
    } catch (const std::invalid_argument& e) {
      std::cerr << e.what() << std::endl;
        return false;
    }
    return true;
}

bool BitcoinExchange::isNumeric(const std::string& str) {
  size_t n_nm, n_pt;
  std::size_t char_pos(0);
  for (n_nm = 0, n_pt = 0; std::isdigit(str[char_pos]) || str[char_pos] == '.'; ++char_pos) {
    str[char_pos] == '.' ? ++n_pt : ++n_nm;
  }
  if (n_pt>1 || n_nm<1 || (n_nm + n_pt) != str.length()) // no more than one point, at least one digit
    return (false);
  return (true);
}

bool BitcoinExchange::isValidNumber(const std::pair<std::string, std::string>& token){
  try{
    if (token.second.empty() || !isNumeric(token.second))
      throw std::invalid_argument("Error: bad input => " + token.first);

  }catch(const std::invalid_argument& e){
    std::cerr << e.what() << std::endl;
    return (false);
  }
  return (true);
}

bool BitcoinExchange::isValidNumberInput(const std::pair<std::string, std::string>& token){
  try{
    float num = std::stof(token.second);
    if (num > 1000){
      throw std::invalid_argument("Error: too large a number.");
    }
    if (num < 0)
      throw std::invalid_argument("Error: not a positive number.");

  }catch(const std::invalid_argument& e){
    std::cerr << e.what() << std::endl;
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
  std::cout << "here:" << it->second << std::endl;
  }else{
  std::cout << token.first << " => "
	    << token.second
	    << " = "
	    << 0
	    <<std::endl;  
  }
}
bool BitcoinExchange::metaData(const std::pair<std::string, std::string> token, bool line){
  if (token.first == "date" && token.second == "value" && line)
    return (true);
  return (false);
}

void BitcoinExchange::parseDataFile(std::ifstream &file, std::map<std::string, float>& m){
  std::pair<std::string, std::string>token;
  std::string line;
  bool isFirstLine = true;
  while  (getline(file, line)){
    token = split(line, ',');
    if (!metaData(token, isFirstLine)){
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
  std::pair<std::string,std::string>token;
  std::string line;
  bool isFirstLine = true;
  while (getline(file,line)){
    token = split(line, '|');
    std::cout << token.second << std::endl;// you should replace pos of isvalidNumberInput
    if (!metaData(token, isFirstLine) && isValidNumberInput(token) && isValidToken(token)){
      caluclateBtcValue(m, std::make_pair(token.first,std::stof(token.second)));
    }
    isFirstLine = false;
  }
}

BitcoinExchange::~BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(std::string filename):_inputFile(filename){}
