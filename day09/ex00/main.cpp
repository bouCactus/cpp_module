#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
const char* ws = " \t\n\r\f\v";

// trim from end of string (right)
inline std::string& rtrim(std::string& s, const char* t = ws)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

// trim from beginning of string (left)
inline std::string& ltrim(std::string& s, const char* t = ws)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

// trim from both ends of string (right then left)
inline std::string& trim(std::string& s, const char* t = ws)
{
    return ltrim(rtrim(s, t), t);
}

std::pair<std::string, std::string> split(std::string s, char del){
    std::stringstream ss(s);
    std::string word;
    std::string tokens[2];
    for (int i = 0; i < 2 && std::getline(ss, word, del); ++i) {
        tokens[i] = trim(word);
    }
    return (std::make_pair(tokens[0],tokens[1]));
}

bool isValidDate(const std::string& dateStr) {
    if (dateStr.size() != 10) {  // Check length
        return false;
    }

    try {
        int year = std::stoi(dateStr.substr(0, 4));  
        int month = std::stoi(dateStr.substr(5, 2)); 
        int day = std::stoi(dateStr.substr(8, 2));  


        if (year < 1900 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }
    } catch (const std::invalid_argument& e) {
        return false;
    }

    return true;
}

bool isValidNumber(const std::string& value){
  try{
    std::stof(value);
  }catch(const std::invalid_argument& e){
    return (false);
  }
  return (true);
}

int isValidToken(const std::pair<std::string, std::string>& token){
  // std::cerr << "validnumberfunc: " << isValidNumber(token.second) <<std::endl;
  return (isValidDate(token.first) && isValidNumber(token.second));
}
std::map<std::string, float>::iterator
get_date_before(std::map<std::string, float>& m, const std::string& date) {
  std::map<std::string, float>::iterator it = m.lower_bound(date);
  if (it == m.begin()) {
    return m.begin();
  } else {
    --it;
    return it;
  }
}
void caluclateBtcValue(std::map<std::string, float>&m,std::pair<std::string, float>token){
  std::map<std::string, float>::iterator it;
  it = m.find(token.first);
  if (it == m.end())
    it = get_date_before(m, token.first);
  std::cout << token.first << " => "
	    << token.second
	    << " * "
	    << it->first << " "
	    << it->second
	    << " = "
	    << it->second * token.second
	    <<std::endl;

}

void parseDataFile(std::ifstream &file, std::map<std::string, float>& m){
  std::pair<std::string, std::string>token;
  std::string line;
  // while (file.good()){
  while  (getline(file, line)){
    token = split(line, ',');

    if(!isValidToken(token)){
      std::cerr << "Error: database: invalid token format\n";
      std::exit(1);
      
    }
    m.insert(std::make_pair(token.first, std::stof(token.second)));
  }
}

void parseInputFile(std::ifstream& file, std::map<std::string, float>&m){
  std::pair<std::string,std::string>token;
  std::string line;
  while (file.good()){
    getline(file,line);
    token = split(line, '|');
    if (isValidToken(token)){
      caluclateBtcValue(m, std::make_pair(token.first,std::stof(token.second)));
    }
  }
}

int main(int argc, char *argv[]){
  std::ifstream inputFile;
  std::ifstream data;
  std::map<std::string, float>m;
  if (argc != 2){
    std::cout << "Error: could not open file." << std::endl;
    return (1);
  }
  inputFile.open(argv[1], std::ios::in);
  
  if (!inputFile.is_open()){
    std::cout << "Error: could not open file." << std::endl;
    return (1);
  }
  data.open("./data.csv", std::ios::in);
  if (!data.is_open()){
    std::cout << "Error: could not read from data" << std::endl;
    return (1);
  }

  parseDataFile(data, m);
// for (auto i : m)
  // std::cout << i.first << " \t\t\t " << i.second << std::endl;
  parseInputFile(inputFile, m);
  
   
  inputFile.close();
  return (0);
}
